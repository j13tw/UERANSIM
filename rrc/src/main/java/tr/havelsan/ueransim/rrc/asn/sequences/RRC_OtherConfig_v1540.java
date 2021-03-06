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

public class RRC_OtherConfig_v1540 extends AsnSequence {
    public RRC_SetupRelease_OverheatingAssistanceConfig overheatingAssistanceConfig; // optional

    public static class RRC_SetupRelease_OverheatingAssistanceConfig extends AsnChoice {
        public AsnNull release;
        public RRC_OverheatingAssistanceConfig setup;
    }
}

