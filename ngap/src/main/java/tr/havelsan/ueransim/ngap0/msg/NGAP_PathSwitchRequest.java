/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.msg;

import tr.havelsan.ueransim.ngap0.NgapMessageType;
import tr.havelsan.ueransim.ngap0.NgapProtocolIeType;
import tr.havelsan.ueransim.ngap0.core.NGAP_BaseMessage;
import tr.havelsan.ueransim.ngap0.core.NGAP_Value;
import tr.havelsan.ueransim.ngap0.ies.choices.NGAP_UserLocationInformation;
import tr.havelsan.ueransim.ngap0.ies.integers.NGAP_AMF_UE_NGAP_ID;
import tr.havelsan.ueransim.ngap0.ies.integers.NGAP_RAN_UE_NGAP_ID;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.NGAP_PDUSessionResourceFailedToSetupListPSReq;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.NGAP_PDUSessionResourceToBeSwitchedDLList;
import tr.havelsan.ueransim.ngap0.ies.sequences.NGAP_UESecurityCapabilities;

public class NGAP_PathSwitchRequest extends NGAP_BaseMessage {

    public NGAP_PathSwitchRequest() {

    }

    @Override
    public NgapMessageType getMessageType() {
        return NgapMessageType.PathSwitchRequest;
    }

    @Override
    public NgapProtocolIeType getProtocolIeType() {
        return NgapProtocolIeType.forMessage("PathSwitchRequest");
    }

    @Override
    public int getCriticality() {
        return 0;
    }

    @Override
    public int getProcedureCode() {
        return 25;
    }

    @Override
    public int getPduType() {
        return 0;
    }

    @Override
    public int[] getIeId() {
        return new int[] { 85, 100, 121, 119, 76, 57 };
    }

    @Override
    public int[] getIeCriticality() {
        return new int[] { 0, 0, 1, 1, 0, 1 };
    }

    @Override
    public Class<? extends NGAP_Value>[] getIeTypes() {
        return new Class[] { NGAP_RAN_UE_NGAP_ID.class, NGAP_AMF_UE_NGAP_ID.class, NGAP_UserLocationInformation.class, NGAP_UESecurityCapabilities.class, NGAP_PDUSessionResourceToBeSwitchedDLList.class, NGAP_PDUSessionResourceFailedToSetupListPSReq.class };
    }

    @Override
    public int[] getIePresence() {
        return new int[] { 2, 2, 2, 2, 2, 0 };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[] { "protocolIEs" };
    }

    @Override
    public String[] getMemberNames() {
        return new String[] { "protocolIEs" };
    }

    @Override
    public String getAsnName() {
        return "PathSwitchRequest";
    }

    @Override
    public String getXmlTagName() {
        return "PathSwitchRequest";
    }

}
