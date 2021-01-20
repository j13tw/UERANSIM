/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.NGAP_SequenceOf;
import tr.havelsan.ueransim.ngap0.ies.sequences.NGAP_PDUSessionResourceReleasedItemPSAck;

import java.util.List;

public class NGAP_PDUSessionResourceReleasedListPSAck extends NGAP_SequenceOf<NGAP_PDUSessionResourceReleasedItemPSAck> {

    public NGAP_PDUSessionResourceReleasedListPSAck() {
        super();
    }

    public NGAP_PDUSessionResourceReleasedListPSAck(List<NGAP_PDUSessionResourceReleasedItemPSAck> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "PDUSessionResourceReleasedListPSAck";
    }

    @Override
    public String getXmlTagName() {
        return "PDUSessionResourceReleasedListPSAck";
    }

    @Override
    public Class<NGAP_PDUSessionResourceReleasedItemPSAck> getItemType() {
        return NGAP_PDUSessionResourceReleasedItemPSAck.class;
    }
}
