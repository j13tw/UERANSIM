/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.rrc.asn.integers;

import tr.havelsan.ueransim.asn.core.AsnInteger;

// VALUE(0..9)
public class RRC_MCC_MNC_Digit extends AsnInteger {
    public RRC_MCC_MNC_Digit() {
    }
    
    public RRC_MCC_MNC_Digit(long value) {
        super(value);
    }
}

