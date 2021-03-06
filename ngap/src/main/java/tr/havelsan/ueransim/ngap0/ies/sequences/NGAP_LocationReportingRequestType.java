/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.NGAP_Sequence;
import tr.havelsan.ueransim.ngap0.ies.enumerations.NGAP_EventType;
import tr.havelsan.ueransim.ngap0.ies.enumerations.NGAP_ReportArea;
import tr.havelsan.ueransim.ngap0.ies.integers.NGAP_LocationReportingReferenceID;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.NGAP_AreaOfInterestList;

public class NGAP_LocationReportingRequestType extends NGAP_Sequence {

    public NGAP_EventType eventType;
    public NGAP_ReportArea reportArea;
    public NGAP_AreaOfInterestList areaOfInterestList;
    public NGAP_LocationReportingReferenceID locationReportingReferenceIDToBeCancelled;

    @Override
    public String getAsnName() {
        return "LocationReportingRequestType";
    }

    @Override
    public String getXmlTagName() {
        return "LocationReportingRequestType";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"eventType", "reportArea", "areaOfInterestList", "locationReportingReferenceIDToBeCancelled"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"eventType", "reportArea", "areaOfInterestList", "locationReportingReferenceIDToBeCancelled"};
    }
}
