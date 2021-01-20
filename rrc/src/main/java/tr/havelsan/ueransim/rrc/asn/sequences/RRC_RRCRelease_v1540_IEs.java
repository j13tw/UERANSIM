/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_RejectWaitTime;

public class RRC_RRCRelease_v1540_IEs extends AsnSequence {
    public RRC_RejectWaitTime waitTime; // optional
    public RRC_nonCriticalExtension_24 nonCriticalExtension; // optional

    public static class RRC_nonCriticalExtension_24 extends AsnSequence {
    }
}

