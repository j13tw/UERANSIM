/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnInteger;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_UAC_BarringInfoSetIndex;

public class RRC_UAC_BarringPerCat extends AsnSequence {
    public AsnInteger accessCategory; // mandatory, VALUE(1..63)
    public RRC_UAC_BarringInfoSetIndex uac_barringInfoSetIndex; // mandatory
}

