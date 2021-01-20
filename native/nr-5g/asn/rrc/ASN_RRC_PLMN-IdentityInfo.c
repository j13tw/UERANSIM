/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_PLMN-IdentityInfo.h"

#include "ASN_RRC_PLMN-Identity.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ASN_RRC_plmn_IdentityList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 12)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ASN_RRC_plmn_IdentityList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ASN_RRC_cellReservedForOperatorUse_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_plmn_IdentityList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ASN_RRC_plmn_IdentityList_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ASN_RRC_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_plmn_IdentityList_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ASN_RRC_plmn_IdentityList_specs_2 = {
	sizeof(struct ASN_RRC_PLMN_IdentityInfo__plmn_IdentityList),
	offsetof(struct ASN_RRC_PLMN_IdentityInfo__plmn_IdentityList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_plmn_IdentityList_2 = {
	"plmn-IdentityList",
	"plmn-IdentityList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ASN_RRC_plmn_IdentityList_tags_2,
	sizeof(asn_DEF_ASN_RRC_plmn_IdentityList_tags_2)
		/sizeof(asn_DEF_ASN_RRC_plmn_IdentityList_tags_2[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_plmn_IdentityList_tags_2,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_plmn_IdentityList_tags_2)
		/sizeof(asn_DEF_ASN_RRC_plmn_IdentityList_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ASN_RRC_plmn_IdentityList_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_ASN_RRC_plmn_IdentityList_2,
	1,	/* Single element */
	&asn_SPC_ASN_RRC_plmn_IdentityList_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ASN_RRC_cellReservedForOperatorUse_value2enum_7[] = {
	{ 0,	8,	"reserved" },
	{ 1,	11,	"notReserved" }
};
static const unsigned int asn_MAP_ASN_RRC_cellReservedForOperatorUse_enum2value_7[] = {
	1,	/* notReserved(1) */
	0	/* reserved(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_RRC_cellReservedForOperatorUse_specs_7 = {
	asn_MAP_ASN_RRC_cellReservedForOperatorUse_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_RRC_cellReservedForOperatorUse_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_cellReservedForOperatorUse_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_cellReservedForOperatorUse_7 = {
	"cellReservedForOperatorUse",
	"cellReservedForOperatorUse",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_RRC_cellReservedForOperatorUse_tags_7,
	sizeof(asn_DEF_ASN_RRC_cellReservedForOperatorUse_tags_7)
		/sizeof(asn_DEF_ASN_RRC_cellReservedForOperatorUse_tags_7[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_cellReservedForOperatorUse_tags_7,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_cellReservedForOperatorUse_tags_7)
		/sizeof(asn_DEF_ASN_RRC_cellReservedForOperatorUse_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_ASN_RRC_cellReservedForOperatorUse_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_RRC_cellReservedForOperatorUse_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_RRC_PLMN_IdentityInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_PLMN_IdentityInfo, plmn_IdentityList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ASN_RRC_plmn_IdentityList_2,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_plmn_IdentityList_constr_2,  memb_ASN_RRC_plmn_IdentityList_constraint_1 },
		0, 0, /* No default value */
		"plmn-IdentityList"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_RRC_PLMN_IdentityInfo, trackingAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_TrackingAreaCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackingAreaCode"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_RRC_PLMN_IdentityInfo, ranac),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_RAN_AreaCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranac"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_PLMN_IdentityInfo, cellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_PLMN_IdentityInfo, cellReservedForOperatorUse),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_cellReservedForOperatorUse_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReservedForOperatorUse"
		},
};
static const int asn_MAP_ASN_RRC_PLMN_IdentityInfo_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_ASN_RRC_PLMN_IdentityInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_PLMN_IdentityInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ranac */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* cellReservedForOperatorUse */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_PLMN_IdentityInfo_specs_1 = {
	sizeof(struct ASN_RRC_PLMN_IdentityInfo),
	offsetof(struct ASN_RRC_PLMN_IdentityInfo, _asn_ctx),
	asn_MAP_ASN_RRC_PLMN_IdentityInfo_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_ASN_RRC_PLMN_IdentityInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_PLMN_IdentityInfo = {
	"PLMN-IdentityInfo",
	"PLMN-IdentityInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_PLMN_IdentityInfo_tags_1,
	sizeof(asn_DEF_ASN_RRC_PLMN_IdentityInfo_tags_1)
		/sizeof(asn_DEF_ASN_RRC_PLMN_IdentityInfo_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_PLMN_IdentityInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_PLMN_IdentityInfo_tags_1)
		/sizeof(asn_DEF_ASN_RRC_PLMN_IdentityInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_PLMN_IdentityInfo_1,
	5,	/* Elements count */
	&asn_SPC_ASN_RRC_PLMN_IdentityInfo_specs_1	/* Additional specs */
};

