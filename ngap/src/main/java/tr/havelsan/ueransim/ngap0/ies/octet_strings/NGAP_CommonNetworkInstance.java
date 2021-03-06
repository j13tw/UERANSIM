/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.octet_strings;

import tr.havelsan.ueransim.ngap0.core.NGAP_OctetString;
import tr.havelsan.ueransim.utils.bits.BitString;
import tr.havelsan.ueransim.utils.octets.Octet;
import tr.havelsan.ueransim.utils.octets.OctetString;

public class NGAP_CommonNetworkInstance extends NGAP_OctetString {

    public NGAP_CommonNetworkInstance(OctetString value) {
        super(value);
    }

    public NGAP_CommonNetworkInstance(BitString value) {
        super(value);
    }

    public NGAP_CommonNetworkInstance(Octet[] octets) {
        super(octets);
    }

    public NGAP_CommonNetworkInstance(int[] octetInts) {
        super(octetInts);
    }

    public NGAP_CommonNetworkInstance(byte[] octetBytes) {
        super(octetBytes);
    }

    public NGAP_CommonNetworkInstance(String hex) {
        super(hex);
    }

    @Override
    public String getAsnName() {
        return "CommonNetworkInstance";
    }

    @Override
    public String getXmlTagName() {
        return "CommonNetworkInstance";
    }
}
