package com.runsim.backend.utils.octets;

import com.runsim.backend.utils.Utils;
import com.runsim.backend.utils.bits.Bit;

public class OctetN {
    private final long _longValue;
    private final byte _octetCount;

    public OctetN(long longValue, int octetCount) {
        // maximum 7 octet, since implementation uses int64.
        if (octetCount < 0 || octetCount > 30)
            throw new IllegalArgumentException("invalid octet count");
        if (longValue < 0)
            throw new IllegalArgumentException("negative value");

        this._longValue = longValue & ((1L << (8 * octetCount)) - 1);
        this._octetCount = (byte) octetCount;
    }

    public final long longValue() {
        return _longValue;
    }

    public final int intValue() {
        int i = Math.toIntExact(_longValue);
        if (i < 0) throw new ArithmeticException();
        return i;
    }

    public final int octetCount() {
        return _octetCount;
    }

    @Override
    public final String toString() {
        return toHexString();
    }

    public final String toHexString() {
        return "0x" + Utils.padLeft(Long.toHexString(_longValue), _octetCount, '0');
    }

    public final String toBinaryString() {
        return "0b" + Utils.padLeft(Long.toBinaryString(_longValue), _octetCount * 8, '0');
    }

    public final int getBitI(int index) {
        return (int) ((_longValue >> index) & 0b1);
    }

    public final boolean getBitB(int index) {
        return getBitI(index) != 0;
    }

    public final Bit getBit(int index) {
        return new Bit(getBitI(index));
    }

    @Override
    public final boolean equals(Object obj) {
        return Utils.unsignedEqual(this, obj);
    }

    public final Octet[] toOctetArray(boolean useBigEndian) {
        var octets = new Octet[octetCount()];
        if (!useBigEndian) {
            for (int i = 0; i < octets.length; i++) {
                octets[i] = new Octet((int) ((_longValue >> (8 * i)) & 0xFF));
            }
        } else {
            for (int i = 0; i < octets.length; i++) {
                octets[octets.length - i - 1] = new Octet((int) ((_longValue >> (8 * i)) & 0xFF));
            }
        }
        return octets;
    }

    public final Octet[] toOctetArray() {
        return toOctetArray(true);
    }
}