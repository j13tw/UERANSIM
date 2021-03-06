/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_SCGFailureInformationEUTRA extends AsnSequence {
    public RRC_criticalExtensions_3 criticalExtensions; // mandatory

    public static class RRC_criticalExtensions_3 extends AsnChoice {
        public RRC_SCGFailureInformationEUTRA_IEs scgFailureInformationEUTRA;
        public RRC_criticalExtensionsFuture_28 criticalExtensionsFuture;
    
        public static class RRC_criticalExtensionsFuture_28 extends AsnSequence {
        }
    }
}

