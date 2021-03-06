/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.enumerations;

import tr.havelsan.ueransim.ngap0.core.NGAP_Enumerated;

public class NGAP_CNTypeRestrictionsForServing extends NGAP_Enumerated {

    public static final NGAP_CNTypeRestrictionsForServing EPC_FORBIDDEN = new NGAP_CNTypeRestrictionsForServing("epc-forbidden");

    protected NGAP_CNTypeRestrictionsForServing(String sValue) {
        super(sValue);
    }

    @Override
    public String getAsnName() {
        return "CNTypeRestrictionsForServing";
    }

    @Override
    public String getXmlTagName() {
        return "CNTypeRestrictionsForServing";
    }
}
