/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.NGAP_SequenceOf;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.NGAP_TAC;

import java.util.List;

public class NGAP_ForbiddenTACs extends NGAP_SequenceOf<NGAP_TAC> {

    public NGAP_ForbiddenTACs() {
        super();
    }

    public NGAP_ForbiddenTACs(List<NGAP_TAC> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "ForbiddenTACs";
    }

    @Override
    public String getXmlTagName() {
        return "ForbiddenTACs";
    }

    @Override
    public Class<NGAP_TAC> getItemType() {
        return NGAP_TAC.class;
    }
}
