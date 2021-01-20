/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.NGAP_Integer;
import tr.havelsan.ueransim.ngap0.core.NGAP_Sequence;
import tr.havelsan.ueransim.ngap0.ies.integers.NGAP_QosFlowIdentifier;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.NGAP_VolumeTimedReportList;

public class NGAP_QoSFlowsUsageReport_Item extends NGAP_Sequence {

    public NGAP_QosFlowIdentifier qosFlowIdentifier;
    public NGAP_Integer rATType;
    public NGAP_VolumeTimedReportList qoSFlowsTimedReportList;

    @Override
    public String getAsnName() {
        return "QoSFlowsUsageReport-Item";
    }

    @Override
    public String getXmlTagName() {
        return "QoSFlowsUsageReport-Item";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"qosFlowIdentifier", "rATType", "qoSFlowsTimedReportList"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"qosFlowIdentifier", "rATType", "qoSFlowsTimedReportList"};
    }
}
