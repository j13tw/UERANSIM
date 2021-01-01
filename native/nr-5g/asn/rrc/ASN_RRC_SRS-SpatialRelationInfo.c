/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_SRS-SpatialRelationInfo.h"

static asn_per_constraints_t asn_PER_type_ASN_RRC_referenceSignal_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ASN_RRC_srs_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_SRS_SpatialRelationInfo__referenceSignal__srs, resourceId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_SRS_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resourceId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_SRS_SpatialRelationInfo__referenceSignal__srs, uplinkBWP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_BWP_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkBWP"
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_srs_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_srs_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resourceId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkBWP */
};
static asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_srs_specs_6 = {
	sizeof(struct ASN_RRC_SRS_SpatialRelationInfo__referenceSignal__srs),
	offsetof(struct ASN_RRC_SRS_SpatialRelationInfo__referenceSignal__srs, _asn_ctx),
	asn_MAP_ASN_RRC_srs_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_srs_6 = {
	"srs",
	"srs",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_srs_tags_6,
	sizeof(asn_DEF_ASN_RRC_srs_tags_6)
		/sizeof(asn_DEF_ASN_RRC_srs_tags_6[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_srs_tags_6,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_srs_tags_6)
		/sizeof(asn_DEF_ASN_RRC_srs_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_srs_6,
	2,	/* Elements count */
	&asn_SPC_ASN_RRC_srs_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ASN_RRC_referenceSignal_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_SRS_SpatialRelationInfo__referenceSignal, choice.ssb_Index),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_SSB_Index,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-Index"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_SRS_SpatialRelationInfo__referenceSignal, choice.csi_RS_Index),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_NZP_CSI_RS_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-Index"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_RRC_SRS_SpatialRelationInfo__referenceSignal, choice.srs),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ASN_RRC_srs_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_referenceSignal_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-Index */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* csi-RS-Index */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* srs */
};
static asn_CHOICE_specifics_t asn_SPC_ASN_RRC_referenceSignal_specs_3 = {
	sizeof(struct ASN_RRC_SRS_SpatialRelationInfo__referenceSignal),
	offsetof(struct ASN_RRC_SRS_SpatialRelationInfo__referenceSignal, _asn_ctx),
	offsetof(struct ASN_RRC_SRS_SpatialRelationInfo__referenceSignal, present),
	sizeof(((struct ASN_RRC_SRS_SpatialRelationInfo__referenceSignal *)0)->present),
	asn_MAP_ASN_RRC_referenceSignal_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_referenceSignal_3 = {
	"referenceSignal",
	"referenceSignal",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ASN_RRC_referenceSignal_constr_3, CHOICE_constraint },
	asn_MBR_ASN_RRC_referenceSignal_3,
	3,	/* Elements count */
	&asn_SPC_ASN_RRC_referenceSignal_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_RRC_SRS_SpatialRelationInfo_1[] = {
	{ ATF_POINTER, 1, offsetof(struct ASN_RRC_SRS_SpatialRelationInfo, servingCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_SRS_SpatialRelationInfo, referenceSignal),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_RRC_referenceSignal_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceSignal"
		},
};
static const int asn_MAP_ASN_RRC_SRS_SpatialRelationInfo_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ASN_RRC_SRS_SpatialRelationInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_SRS_SpatialRelationInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servingCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* referenceSignal */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_SRS_SpatialRelationInfo_specs_1 = {
	sizeof(struct ASN_RRC_SRS_SpatialRelationInfo),
	offsetof(struct ASN_RRC_SRS_SpatialRelationInfo, _asn_ctx),
	asn_MAP_ASN_RRC_SRS_SpatialRelationInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ASN_RRC_SRS_SpatialRelationInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_SRS_SpatialRelationInfo = {
	"SRS-SpatialRelationInfo",
	"SRS-SpatialRelationInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_SRS_SpatialRelationInfo_tags_1,
	sizeof(asn_DEF_ASN_RRC_SRS_SpatialRelationInfo_tags_1)
		/sizeof(asn_DEF_ASN_RRC_SRS_SpatialRelationInfo_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_SRS_SpatialRelationInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_SRS_SpatialRelationInfo_tags_1)
		/sizeof(asn_DEF_ASN_RRC_SRS_SpatialRelationInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_SRS_SpatialRelationInfo_1,
	2,	/* Elements count */
	&asn_SPC_ASN_RRC_SRS_SpatialRelationInfo_specs_1	/* Additional specs */
};

