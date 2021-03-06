/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_FreqBandIndicatorEUTRA;
import tr.havelsan.ueransim.rrc.asn.sequence_ofs.RRC_EUTRA_NS_PmaxList;

public class RRC_EUTRA_MultiBandInfo extends AsnSequence {
    public RRC_FreqBandIndicatorEUTRA eutra_FreqBandIndicator; // mandatory
    public RRC_EUTRA_NS_PmaxList eutra_NS_PmaxList; // optional
}

