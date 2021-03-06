/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.NGAP_Sequence;
import tr.havelsan.ueransim.ngap0.ies.choices.NGAP_CPTransportLayerInformation;

public class NGAP_NGRAN_TNLAssociationToRemoveItem extends NGAP_Sequence {

    public NGAP_CPTransportLayerInformation tNLAssociationTransportLayerAddress;
    public NGAP_CPTransportLayerInformation tNLAssociationTransportLayerAddressAMF;

    @Override
    public String getAsnName() {
        return "NGRAN-TNLAssociationToRemoveItem";
    }

    @Override
    public String getXmlTagName() {
        return "NGRAN-TNLAssociationToRemoveItem";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"tNLAssociationTransportLayerAddress", "tNLAssociationTransportLayerAddressAMF"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"tNLAssociationTransportLayerAddress", "tNLAssociationTransportLayerAddressAMF"};
    }
}
