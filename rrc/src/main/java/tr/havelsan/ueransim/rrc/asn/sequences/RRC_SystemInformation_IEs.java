/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnOctetString;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.asn.core.AsnSequenceOf;

public class RRC_SystemInformation_IEs extends AsnSequence {
    public RRC_sib_TypeAndInfo sib_TypeAndInfo; // mandatory, SIZE(1..32)
    public AsnOctetString lateNonCriticalExtension; // optional
    public RRC_nonCriticalExtension_36 nonCriticalExtension; // optional

    public static class RRC_nonCriticalExtension_36 extends AsnSequence {
    }

    // SIZE(1..32)
    public static class RRC_sib_TypeAndInfo extends AsnSequenceOf<AsnChoice> {
    }
}

