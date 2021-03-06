/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.NGAP_SequenceOf;
import tr.havelsan.ueransim.ngap0.ies.sequences.NGAP_PDUSessionResourceReleasedItemRelRes;

import java.util.List;

public class NGAP_PDUSessionResourceReleasedListRelRes extends NGAP_SequenceOf<NGAP_PDUSessionResourceReleasedItemRelRes> {

    public NGAP_PDUSessionResourceReleasedListRelRes() {
        super();
    }

    public NGAP_PDUSessionResourceReleasedListRelRes(List<NGAP_PDUSessionResourceReleasedItemRelRes> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "PDUSessionResourceReleasedListRelRes";
    }

    @Override
    public String getXmlTagName() {
        return "PDUSessionResourceReleasedListRelRes";
    }

    @Override
    public Class<NGAP_PDUSessionResourceReleasedItemRelRes> getItemType() {
        return NGAP_PDUSessionResourceReleasedItemRelRes.class;
    }
}
