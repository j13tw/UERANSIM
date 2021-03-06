/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.NGAP_Sequence;
import tr.havelsan.ueransim.ngap0.ies.integers.NGAP_BitRate;

public class NGAP_PDUSessionAggregateMaximumBitRate extends NGAP_Sequence {

    public NGAP_BitRate pDUSessionAggregateMaximumBitRateDL;
    public NGAP_BitRate pDUSessionAggregateMaximumBitRateUL;

    @Override
    public String getAsnName() {
        return "PDUSessionAggregateMaximumBitRate";
    }

    @Override
    public String getXmlTagName() {
        return "PDUSessionAggregateMaximumBitRate";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"pDUSessionAggregateMaximumBitRateDL", "pDUSessionAggregateMaximumBitRateUL"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"pDUSessionAggregateMaximumBitRateDL", "pDUSessionAggregateMaximumBitRateUL"};
    }
}
