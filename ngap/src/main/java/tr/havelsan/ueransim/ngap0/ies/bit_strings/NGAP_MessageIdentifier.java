/*
 * MIT License
 *
 * Copyright (c) 2020 ALİ GÜNGÖR
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

package tr.havelsan.ueransim.ngap0.ies.bit_strings;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.pdu.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.choices.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;
import tr.havelsan.ueransim.ngap0.ies.enumerations.*;

import java.util.List;

public class NGAP_MessageIdentifier extends NGAP_BitString {

    public NGAP_MessageIdentifier(BitString value) {
        super(value);
    }

    public NGAP_MessageIdentifier(OctetString octetString, int bitLength) {
        super(octetString, bitLength);
    }

    public NGAP_MessageIdentifier(OctetString octetString) {
        super(octetString);
    }

    public NGAP_MessageIdentifier(Octet[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_MessageIdentifier(Octet[] octets) {
        super(octets);
    }

    public NGAP_MessageIdentifier(byte[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_MessageIdentifier(byte[] octets) {
        super(octets);
    }

    public NGAP_MessageIdentifier(String hex, int bitLength) {
        super(hex, bitLength);
    }

    public NGAP_MessageIdentifier(String bits) {
        super(bits);
    }

    @Override
    public String getAsnName() {
        return "MessageIdentifier";
    }

    @Override
    public String getXmlTagName() {
        return "MessageIdentifier";
    }
}
