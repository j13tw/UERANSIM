/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.app.common.nts;

import java.util.UUID;

public class IwCliClientMessage {
    public final UUID client;
    public final byte[] data;

    public IwCliClientMessage(UUID client, byte[] data) {
        this.client = client;
        this.data = data;
    }
}
