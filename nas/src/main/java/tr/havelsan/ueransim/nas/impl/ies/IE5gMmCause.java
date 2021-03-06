/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.nas.impl.ies;

import tr.havelsan.ueransim.nas.core.ies.InformationElement3;
import tr.havelsan.ueransim.nas.impl.enums.EMmCause;
import tr.havelsan.ueransim.utils.OctetInputStream;
import tr.havelsan.ueransim.utils.OctetOutputStream;

public class IE5gMmCause extends InformationElement3 {
    public EMmCause value;

    public IE5gMmCause() {
    }

    public IE5gMmCause(EMmCause value) {
        this.value = value;
    }

    @Override
    protected IE5gMmCause decodeIE3(OctetInputStream stream) {
        var res = new IE5gMmCause();
        res.value = EMmCause.fromValue(stream.readOctetI());
        return res;
    }

    @Override
    public void encodeIE3(OctetOutputStream stream) {
        stream.writeOctet(value.intValue());
    }
}
