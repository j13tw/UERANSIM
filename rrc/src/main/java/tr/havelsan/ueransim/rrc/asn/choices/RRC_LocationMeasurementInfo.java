/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.rrc.asn.choices;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnNull;
import tr.havelsan.ueransim.rrc.asn.sequence_ofs.RRC_EUTRA_RSTD_InfoList;

public class RRC_LocationMeasurementInfo extends AsnChoice {
    public RRC_EUTRA_RSTD_InfoList eutra_RSTD;
    public AsnNull eutra_FineTimingDetection;
}

