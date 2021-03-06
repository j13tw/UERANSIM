/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnOctetString;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_UERadioAccessCapabilityInformation_IEs extends AsnSequence {
    public AsnOctetString ue_RadioAccessCapabilityInfo; // mandatory, SIZE(0..MAX)
    public RRC_nonCriticalExtension_19 nonCriticalExtension; // optional

    public static class RRC_nonCriticalExtension_19 extends AsnSequence {
    }
}

