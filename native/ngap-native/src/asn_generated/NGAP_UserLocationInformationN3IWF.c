/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/NGAP-IEs.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap -pdu=all`
 */

#include "NGAP_UserLocationInformationN3IWF.h"

#include "NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NGAP_UserLocationInformationN3IWF_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UserLocationInformationN3IWF, iPAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iPAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UserLocationInformationN3IWF, portNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_PortNumber,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"portNumber"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_UserLocationInformationN3IWF, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_176P190,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_UserLocationInformationN3IWF_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_NGAP_UserLocationInformationN3IWF_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_UserLocationInformationN3IWF_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iPAddress */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* portNumber */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_UserLocationInformationN3IWF_specs_1 = {
	sizeof(struct NGAP_UserLocationInformationN3IWF),
	offsetof(struct NGAP_UserLocationInformationN3IWF, _asn_ctx),
	asn_MAP_NGAP_UserLocationInformationN3IWF_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NGAP_UserLocationInformationN3IWF_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_UserLocationInformationN3IWF = {
	"UserLocationInformationN3IWF",
	"UserLocationInformationN3IWF",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_UserLocationInformationN3IWF_tags_1,
	sizeof(asn_DEF_NGAP_UserLocationInformationN3IWF_tags_1)
		/sizeof(asn_DEF_NGAP_UserLocationInformationN3IWF_tags_1[0]), /* 1 */
	asn_DEF_NGAP_UserLocationInformationN3IWF_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_UserLocationInformationN3IWF_tags_1)
		/sizeof(asn_DEF_NGAP_UserLocationInformationN3IWF_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_UserLocationInformationN3IWF_1,
	3,	/* Elements count */
	&asn_SPC_NGAP_UserLocationInformationN3IWF_specs_1	/* Additional specs */
};

