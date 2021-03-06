/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.NGAP_SequenceOf;
import tr.havelsan.ueransim.ngap0.ies.sequences.NGAP_NGRAN_TNLAssociationToRemoveItem;

import java.util.List;

public class NGAP_NGRAN_TNLAssociationToRemoveList extends NGAP_SequenceOf<NGAP_NGRAN_TNLAssociationToRemoveItem> {

    public NGAP_NGRAN_TNLAssociationToRemoveList() {
        super();
    }

    public NGAP_NGRAN_TNLAssociationToRemoveList(List<NGAP_NGRAN_TNLAssociationToRemoveItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "NGRAN-TNLAssociationToRemoveList";
    }

    @Override
    public String getXmlTagName() {
        return "NGRAN-TNLAssociationToRemoveList";
    }

    @Override
    public Class<NGAP_NGRAN_TNLAssociationToRemoveItem> getItemType() {
        return NGAP_NGRAN_TNLAssociationToRemoveItem.class;
    }
}
