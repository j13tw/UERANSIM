/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.NGAP_SequenceOf;
import tr.havelsan.ueransim.ngap0.ies.sequences.NGAP_EmergencyAreaIDCancelledEUTRA_Item;

import java.util.List;

public class NGAP_EmergencyAreaIDCancelledEUTRA extends NGAP_SequenceOf<NGAP_EmergencyAreaIDCancelledEUTRA_Item> {

    public NGAP_EmergencyAreaIDCancelledEUTRA() {
        super();
    }

    public NGAP_EmergencyAreaIDCancelledEUTRA(List<NGAP_EmergencyAreaIDCancelledEUTRA_Item> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "EmergencyAreaIDCancelledEUTRA";
    }

    @Override
    public String getXmlTagName() {
        return "EmergencyAreaIDCancelledEUTRA";
    }

    @Override
    public Class<NGAP_EmergencyAreaIDCancelledEUTRA_Item> getItemType() {
        return NGAP_EmergencyAreaIDCancelledEUTRA_Item.class;
    }
}
