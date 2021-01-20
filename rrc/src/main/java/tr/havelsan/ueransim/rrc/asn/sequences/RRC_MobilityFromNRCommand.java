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
import tr.havelsan.ueransim.rrc.asn.integers.RRC_RRC_TransactionIdentifier;

public class RRC_MobilityFromNRCommand extends AsnSequence {
    public RRC_RRC_TransactionIdentifier rrc_TransactionIdentifier; // mandatory
    public RRC_criticalExtensions_8 criticalExtensions; // mandatory

    public static class RRC_criticalExtensions_8 extends AsnChoice {
        public RRC_MobilityFromNRCommand_IEs mobilityFromNRCommand;
        public RRC_criticalExtensionsFuture_12 criticalExtensionsFuture;
    
        public static class RRC_criticalExtensionsFuture_12 extends AsnSequence {
        }
    }
}

