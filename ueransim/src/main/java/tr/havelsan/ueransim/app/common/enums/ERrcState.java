/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.app.common.enums;

public enum ERrcState {
    RRC_CONNECTED,
    RRC_INACTIVE,
    RRC_IDLE;

    public boolean hasConnection() {
        return this != RRC_IDLE;
    }
}
