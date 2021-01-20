/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.NGAP_SequenceOf;
import tr.havelsan.ueransim.ngap0.ies.sequences.NGAP_PDUSessionResourceNotifyItem;

import java.util.List;

public class NGAP_PDUSessionResourceNotifyList extends NGAP_SequenceOf<NGAP_PDUSessionResourceNotifyItem> {

    public NGAP_PDUSessionResourceNotifyList() {
        super();
    }

    public NGAP_PDUSessionResourceNotifyList(List<NGAP_PDUSessionResourceNotifyItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "PDUSessionResourceNotifyList";
    }

    @Override
    public String getXmlTagName() {
        return "PDUSessionResourceNotifyList";
    }

    @Override
    public Class<NGAP_PDUSessionResourceNotifyItem> getItemType() {
        return NGAP_PDUSessionResourceNotifyItem.class;
    }
}
