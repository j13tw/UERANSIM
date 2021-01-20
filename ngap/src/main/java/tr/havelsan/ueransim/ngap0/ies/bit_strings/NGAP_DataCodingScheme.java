/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.bit_strings;

import tr.havelsan.ueransim.ngap0.core.NGAP_BitString;
import tr.havelsan.ueransim.utils.bits.BitString;
import tr.havelsan.ueransim.utils.octets.Octet;
import tr.havelsan.ueransim.utils.octets.OctetString;

public class NGAP_DataCodingScheme extends NGAP_BitString {

    public NGAP_DataCodingScheme(BitString value) {
        super(value);
    }

    public NGAP_DataCodingScheme(OctetString octetString, int bitLength) {
        super(octetString, bitLength);
    }

    public NGAP_DataCodingScheme(OctetString octetString) {
        super(octetString);
    }

    public NGAP_DataCodingScheme(Octet[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_DataCodingScheme(Octet[] octets) {
        super(octets);
    }

    public NGAP_DataCodingScheme(byte[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_DataCodingScheme(byte[] octets) {
        super(octets);
    }

    public NGAP_DataCodingScheme(String hex, int bitLength) {
        super(hex, bitLength);
    }

    public NGAP_DataCodingScheme(String bits) {
        super(bits);
    }

    @Override
    public String getAsnName() {
        return "DataCodingScheme";
    }

    @Override
    public String getXmlTagName() {
        return "DataCodingScheme";
    }
}
