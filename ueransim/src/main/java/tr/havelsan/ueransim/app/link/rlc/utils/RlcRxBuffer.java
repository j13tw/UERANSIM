package tr.havelsan.ueransim.app.link.rlc.utils;

import tr.havelsan.ueransim.app.link.rlc.pdu.IRxPdu;

import java.util.LinkedList;

public class RlcRxBuffer<T extends IRxPdu> {

    private final ISnCompare snCompare;
    private final LinkedList<T> list;
    private final int maxSize;
    private int currentSize;

    public RlcRxBuffer(ISnCompare snCompare, int maxSize) {
        this.snCompare = snCompare;
        this.maxSize = maxSize;
        this.list = new LinkedList<>();
    }

    public void add(T rxPdu) {
        RlcUtils.insertSortedLinkedList(list, rxPdu, (a, b) -> {
            if (a.getSn() == b.getSn())
                return Integer.compare(a.getSo(), b.getSo());
            return snCompare.compare(a.getSn(), b.getSn());
        });

        // No check for max size, it should be done externally using hasRoomFor method.
        currentSize += rxPdu.getSize();
    }

    public boolean hasRoomFor(int size) {
        return currentSize + size <= maxSize;
    }

    public boolean hasRoomFor(T rxPdu) {
        return hasRoomFor(rxPdu.getSize());
    }

    public void clear() {
        list.clear();
        currentSize = 0;
    }

    public boolean hasMissingBytes(int sn) {
        var it = list.listIterator();

        T cursor;
        do {
            // No such a PDU, therefore we don't have a missing segment.
            if (!it.hasNext())
                return false;
            cursor = it.next();
        } while (cursor.getSn() != sn);

        if (cursor.isProcessed()) {
            // The related SN is already processed, therefore we don't have a missing segment.
            return false;
        }

        int lastByte = -1;
        while (true) {
            if (cursor.getSn() != sn)
                break;

            if (cursor.getSo() > lastByte + 1)
                return true;
            int newLastByte = cursor.getSo() + cursor.getSize() - 1;
            if (newLastByte > lastByte)
                lastByte = newLastByte;

            if (it.hasNext())
                cursor = it.next();
            else
                break;
        }

        return false;
    }

    public boolean isAllSegmentsReceived(int sn) {
        var it = list.listIterator();

        T cursor;
        do {
            if (!it.hasNext())
                return false;
            cursor = it.next();
        } while (cursor.getSn() != sn);

        // WARNING: Check if it is already reassembled and delivered. Returning false if it is
        //  already processes. Because no need to reprocess it. We can consider this method as
        //  "ready to reassemble and deliver" instead of "is all segments received?"
        if (cursor.isProcessed())
            return false;

        int lastByte = -1;
        while (true) {
            if (cursor.getSn() != sn)
                break;

            if (cursor.getSo() > lastByte + 1)
                return false;
            if (cursor.getSi().hasLast())
                return true;
            int newLastByte = cursor.getSo() + cursor.getSize() - 1;
            if (newLastByte > lastByte)
                lastByte = newLastByte;

            if (it.hasNext())
                cursor = it.next();
            else
                break;
        }

        return false;
    }
}
