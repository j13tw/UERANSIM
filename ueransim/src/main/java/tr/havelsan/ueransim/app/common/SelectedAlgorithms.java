/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.app.common;

import tr.havelsan.ueransim.nas.impl.enums.ETypeOfCipheringAlgorithm;
import tr.havelsan.ueransim.nas.impl.enums.ETypeOfIntegrityProtectionAlgorithm;

public class SelectedAlgorithms {
    public final ETypeOfIntegrityProtectionAlgorithm integrity;
    public final ETypeOfCipheringAlgorithm ciphering;

    public SelectedAlgorithms(ETypeOfIntegrityProtectionAlgorithm integrity, ETypeOfCipheringAlgorithm ciphering) {
        this.integrity = integrity;
        this.ciphering = ciphering;
    }
}
