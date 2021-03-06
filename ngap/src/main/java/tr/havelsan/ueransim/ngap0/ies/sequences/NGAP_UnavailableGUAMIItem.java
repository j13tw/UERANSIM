/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.NGAP_Sequence;
import tr.havelsan.ueransim.ngap0.ies.enumerations.NGAP_TimerApproachForGUAMIRemoval;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.NGAP_AMFName;

public class NGAP_UnavailableGUAMIItem extends NGAP_Sequence {

    public NGAP_GUAMI gUAMI;
    public NGAP_TimerApproachForGUAMIRemoval timerApproachForGUAMIRemoval;
    public NGAP_AMFName backupAMFName;

    @Override
    public String getAsnName() {
        return "UnavailableGUAMIItem";
    }

    @Override
    public String getXmlTagName() {
        return "UnavailableGUAMIItem";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"gUAMI", "timerApproachForGUAMIRemoval", "backupAMFName"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"gUAMI", "timerApproachForGUAMIRemoval", "backupAMFName"};
    }
}
