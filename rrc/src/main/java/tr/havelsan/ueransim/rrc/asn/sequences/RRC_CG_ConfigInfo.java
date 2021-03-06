/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnNull;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_CG_ConfigInfo extends AsnSequence {
    public RRC_criticalExtensions_19 criticalExtensions; // mandatory

    public static class RRC_criticalExtensions_19 extends AsnChoice {
        public RRC_c1_10 c1;
        public RRC_criticalExtensionsFuture_23 criticalExtensionsFuture;
    
        public static class RRC_c1_10 extends AsnChoice {
            public RRC_CG_ConfigInfo_IEs cg_ConfigInfo;
            public AsnNull spare3;
            public AsnNull spare2;
            public AsnNull spare1;
        }
    
        public static class RRC_criticalExtensionsFuture_23 extends AsnSequence {
        }
    }
}

