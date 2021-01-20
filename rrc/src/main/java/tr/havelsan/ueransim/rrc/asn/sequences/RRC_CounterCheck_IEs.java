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
import tr.havelsan.ueransim.rrc.asn.sequence_ofs.RRC_DRB_CountMSB_InfoList;

public class RRC_CounterCheck_IEs extends AsnSequence {
    public RRC_DRB_CountMSB_InfoList drb_CountMSB_InfoList; // mandatory
    public AsnOctetString lateNonCriticalExtension; // optional
    public RRC_nonCriticalExtension_28 nonCriticalExtension; // optional

    public static class RRC_nonCriticalExtension_28 extends AsnSequence {
    }
}

