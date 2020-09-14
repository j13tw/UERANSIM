package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.pdu.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.choices.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;
import tr.havelsan.ueransim.ngap0.ies.enumerations.*;

import java.util.List;

public class NGAP_EmergencyAreaIDBroadcastNR_Item extends NGAP_Sequence {

    public NGAP_EmergencyAreaID emergencyAreaID;
    public NGAP_CompletedCellsInEAI_NR completedCellsInEAI_NR;

    @Override
    public String getAsnName() {
        return "EmergencyAreaIDBroadcastNR-Item";
    }

    @Override
    public String getXmlTagName() {
        return "EmergencyAreaIDBroadcastNR-Item";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"emergencyAreaID", "completedCellsInEAI-NR"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"emergencyAreaID", "completedCellsInEAI_NR"};
    }
}
