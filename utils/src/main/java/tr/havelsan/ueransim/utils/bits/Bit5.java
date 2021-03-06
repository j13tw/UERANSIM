/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.utils.bits;

public final class Bit5 extends BitN {

    public Bit5(int value) {
        super(value, 5);
    }

    public Bit5(Bit bit4, Bit bit3, Bit bit2, Bit bit1, Bit bit0) {
        super(bit4, bit3, bit2, bit1, bit0);
    }

    public Bit5(int bit4, int bit3, int bit2, int bit1, int bit0) {
        super(bit4, bit3, bit2, bit1, bit0);
    }
}