/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_IMS_Parameters extends AsnSequence {
    public RRC_IMS_ParametersCommon ims_ParametersCommon; // optional
    public RRC_IMS_ParametersFRX_Diff ims_ParametersFRX_Diff; // optional
}

