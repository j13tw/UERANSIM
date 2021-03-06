/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.app.common.nts;

import tr.havelsan.ueransim.rrc.RrcMessage;

import java.util.UUID;

public class IwDownlinkRrc {
    public final UUID ueId;
    public final RrcMessage rrcMessage;

    public IwDownlinkRrc(UUID ueId, RrcMessage rrcMessage) {
        this.ueId = ueId;
        this.rrcMessage = rrcMessage;
    }
}
