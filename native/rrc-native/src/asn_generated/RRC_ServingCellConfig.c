/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_ServingCellConfig.h"

#include "RRC_TDD-UL-DL-ConfigDedicated.h"
#include "RRC_BWP-DownlinkDedicated.h"
#include "RRC_UplinkConfig.h"
#include "RRC_SetupRelease.h"
#include "RRC_CrossCarrierSchedulingConfig.h"
#include "RRC_BWP-Downlink.h"
#include "RRC_RateMatchPattern.h"
#include "RRC_SCS-SpecificCarrier.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_RRC_rateMatchPatternToAddModList_constraint_73(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_RRC_rateMatchPatternToReleaseList_constraint_73(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_RRC_downlinkChannelBW_PerSCS_List_constraint_73(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 5)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_RRC_downlinkBWP_ToReleaseList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_RRC_downlinkBWP_ToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_RRC_downlinkBWP_ToReleaseList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_downlinkBWP_ToAddModList_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_bwp_InactivityTimer_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  30 }	/* (0..30) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_sCellDeactivationTimer_constr_47 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_dummy_constr_66 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_pathlossReferenceLinking_constr_68 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_rateMatchPatternToAddModList_constr_75 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_rateMatchPatternToReleaseList_constr_77 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_downlinkChannelBW_PerSCS_List_constr_79 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_rateMatchPatternToAddModList_constr_75 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_rateMatchPatternToReleaseList_constr_77 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_downlinkChannelBW_PerSCS_List_constr_79 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_downlinkBWP_ToReleaseList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_downlinkBWP_ToAddModList_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RRC_downlinkBWP_ToReleaseList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_RRC_BWP_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_downlinkBWP_ToReleaseList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_RRC_downlinkBWP_ToReleaseList_specs_4 = {
	sizeof(struct RRC_ServingCellConfig__downlinkBWP_ToReleaseList),
	offsetof(struct RRC_ServingCellConfig__downlinkBWP_ToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_downlinkBWP_ToReleaseList_4 = {
	"downlinkBWP-ToReleaseList",
	"downlinkBWP-ToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_RRC_downlinkBWP_ToReleaseList_tags_4,
	sizeof(asn_DEF_RRC_downlinkBWP_ToReleaseList_tags_4)
		/sizeof(asn_DEF_RRC_downlinkBWP_ToReleaseList_tags_4[0]) - 1, /* 1 */
	asn_DEF_RRC_downlinkBWP_ToReleaseList_tags_4,	/* Same as above */
	sizeof(asn_DEF_RRC_downlinkBWP_ToReleaseList_tags_4)
		/sizeof(asn_DEF_RRC_downlinkBWP_ToReleaseList_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_downlinkBWP_ToReleaseList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_RRC_downlinkBWP_ToReleaseList_4,
	1,	/* Single element */
	&asn_SPC_RRC_downlinkBWP_ToReleaseList_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_downlinkBWP_ToAddModList_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RRC_BWP_Downlink,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_downlinkBWP_ToAddModList_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_RRC_downlinkBWP_ToAddModList_specs_6 = {
	sizeof(struct RRC_ServingCellConfig__downlinkBWP_ToAddModList),
	offsetof(struct RRC_ServingCellConfig__downlinkBWP_ToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_downlinkBWP_ToAddModList_6 = {
	"downlinkBWP-ToAddModList",
	"downlinkBWP-ToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_RRC_downlinkBWP_ToAddModList_tags_6,
	sizeof(asn_DEF_RRC_downlinkBWP_ToAddModList_tags_6)
		/sizeof(asn_DEF_RRC_downlinkBWP_ToAddModList_tags_6[0]) - 1, /* 1 */
	asn_DEF_RRC_downlinkBWP_ToAddModList_tags_6,	/* Same as above */
	sizeof(asn_DEF_RRC_downlinkBWP_ToAddModList_tags_6)
		/sizeof(asn_DEF_RRC_downlinkBWP_ToAddModList_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_downlinkBWP_ToAddModList_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_RRC_downlinkBWP_ToAddModList_6,
	1,	/* Single element */
	&asn_SPC_RRC_downlinkBWP_ToAddModList_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_bwp_InactivityTimer_value2enum_9[] = {
	{ 0,	3,	"ms2" },
	{ 1,	3,	"ms3" },
	{ 2,	3,	"ms4" },
	{ 3,	3,	"ms5" },
	{ 4,	3,	"ms6" },
	{ 5,	3,	"ms8" },
	{ 6,	4,	"ms10" },
	{ 7,	4,	"ms20" },
	{ 8,	4,	"ms30" },
	{ 9,	4,	"ms40" },
	{ 10,	4,	"ms50" },
	{ 11,	4,	"ms60" },
	{ 12,	4,	"ms80" },
	{ 13,	5,	"ms100" },
	{ 14,	5,	"ms200" },
	{ 15,	5,	"ms300" },
	{ 16,	5,	"ms500" },
	{ 17,	5,	"ms750" },
	{ 18,	6,	"ms1280" },
	{ 19,	6,	"ms1920" },
	{ 20,	6,	"ms2560" },
	{ 21,	7,	"spare10" },
	{ 22,	6,	"spare9" },
	{ 23,	6,	"spare8" },
	{ 24,	6,	"spare7" },
	{ 25,	6,	"spare6" },
	{ 26,	6,	"spare5" },
	{ 27,	6,	"spare4" },
	{ 28,	6,	"spare3" },
	{ 29,	6,	"spare2" },
	{ 30,	6,	"spare1" }
};
static const unsigned int asn_MAP_RRC_bwp_InactivityTimer_enum2value_9[] = {
	6,	/* ms10(6) */
	13,	/* ms100(13) */
	18,	/* ms1280(18) */
	19,	/* ms1920(19) */
	0,	/* ms2(0) */
	7,	/* ms20(7) */
	14,	/* ms200(14) */
	20,	/* ms2560(20) */
	1,	/* ms3(1) */
	8,	/* ms30(8) */
	15,	/* ms300(15) */
	2,	/* ms4(2) */
	9,	/* ms40(9) */
	3,	/* ms5(3) */
	10,	/* ms50(10) */
	16,	/* ms500(16) */
	4,	/* ms6(4) */
	11,	/* ms60(11) */
	17,	/* ms750(17) */
	5,	/* ms8(5) */
	12,	/* ms80(12) */
	30,	/* spare1(30) */
	21,	/* spare10(21) */
	29,	/* spare2(29) */
	28,	/* spare3(28) */
	27,	/* spare4(27) */
	26,	/* spare5(26) */
	25,	/* spare6(25) */
	24,	/* spare7(24) */
	23,	/* spare8(23) */
	22	/* spare9(22) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_bwp_InactivityTimer_specs_9 = {
	asn_MAP_RRC_bwp_InactivityTimer_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_bwp_InactivityTimer_enum2value_9,	/* N => "tag"; sorted by N */
	31,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_bwp_InactivityTimer_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_bwp_InactivityTimer_9 = {
	"bwp-InactivityTimer",
	"bwp-InactivityTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_bwp_InactivityTimer_tags_9,
	sizeof(asn_DEF_RRC_bwp_InactivityTimer_tags_9)
		/sizeof(asn_DEF_RRC_bwp_InactivityTimer_tags_9[0]) - 1, /* 1 */
	asn_DEF_RRC_bwp_InactivityTimer_tags_9,	/* Same as above */
	sizeof(asn_DEF_RRC_bwp_InactivityTimer_tags_9)
		/sizeof(asn_DEF_RRC_bwp_InactivityTimer_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_bwp_InactivityTimer_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_bwp_InactivityTimer_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_sCellDeactivationTimer_value2enum_47[] = {
	{ 0,	4,	"ms20" },
	{ 1,	4,	"ms40" },
	{ 2,	4,	"ms80" },
	{ 3,	5,	"ms160" },
	{ 4,	5,	"ms200" },
	{ 5,	5,	"ms240" },
	{ 6,	5,	"ms320" },
	{ 7,	5,	"ms400" },
	{ 8,	5,	"ms480" },
	{ 9,	5,	"ms520" },
	{ 10,	5,	"ms640" },
	{ 11,	5,	"ms720" },
	{ 12,	5,	"ms840" },
	{ 13,	6,	"ms1280" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_RRC_sCellDeactivationTimer_enum2value_47[] = {
	13,	/* ms1280(13) */
	3,	/* ms160(3) */
	0,	/* ms20(0) */
	4,	/* ms200(4) */
	5,	/* ms240(5) */
	6,	/* ms320(6) */
	1,	/* ms40(1) */
	7,	/* ms400(7) */
	8,	/* ms480(8) */
	9,	/* ms520(9) */
	10,	/* ms640(10) */
	11,	/* ms720(11) */
	2,	/* ms80(2) */
	12,	/* ms840(12) */
	15,	/* spare1(15) */
	14	/* spare2(14) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_sCellDeactivationTimer_specs_47 = {
	asn_MAP_RRC_sCellDeactivationTimer_value2enum_47,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_sCellDeactivationTimer_enum2value_47,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_sCellDeactivationTimer_tags_47[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_sCellDeactivationTimer_47 = {
	"sCellDeactivationTimer",
	"sCellDeactivationTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_sCellDeactivationTimer_tags_47,
	sizeof(asn_DEF_RRC_sCellDeactivationTimer_tags_47)
		/sizeof(asn_DEF_RRC_sCellDeactivationTimer_tags_47[0]) - 1, /* 1 */
	asn_DEF_RRC_sCellDeactivationTimer_tags_47,	/* Same as above */
	sizeof(asn_DEF_RRC_sCellDeactivationTimer_tags_47)
		/sizeof(asn_DEF_RRC_sCellDeactivationTimer_tags_47[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_sCellDeactivationTimer_constr_47, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_sCellDeactivationTimer_specs_47	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_dummy_value2enum_66[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_RRC_dummy_enum2value_66[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_dummy_specs_66 = {
	asn_MAP_RRC_dummy_value2enum_66,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_dummy_enum2value_66,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_dummy_tags_66[] = {
	(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_dummy_66 = {
	"dummy",
	"dummy",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_dummy_tags_66,
	sizeof(asn_DEF_RRC_dummy_tags_66)
		/sizeof(asn_DEF_RRC_dummy_tags_66[0]) - 1, /* 1 */
	asn_DEF_RRC_dummy_tags_66,	/* Same as above */
	sizeof(asn_DEF_RRC_dummy_tags_66)
		/sizeof(asn_DEF_RRC_dummy_tags_66[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_dummy_constr_66, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_dummy_specs_66	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_pathlossReferenceLinking_value2enum_68[] = {
	{ 0,	6,	"spCell" },
	{ 1,	5,	"sCell" }
};
static const unsigned int asn_MAP_RRC_pathlossReferenceLinking_enum2value_68[] = {
	1,	/* sCell(1) */
	0	/* spCell(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_pathlossReferenceLinking_specs_68 = {
	asn_MAP_RRC_pathlossReferenceLinking_value2enum_68,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_pathlossReferenceLinking_enum2value_68,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_pathlossReferenceLinking_tags_68[] = {
	(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_pathlossReferenceLinking_68 = {
	"pathlossReferenceLinking",
	"pathlossReferenceLinking",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_pathlossReferenceLinking_tags_68,
	sizeof(asn_DEF_RRC_pathlossReferenceLinking_tags_68)
		/sizeof(asn_DEF_RRC_pathlossReferenceLinking_tags_68[0]) - 1, /* 1 */
	asn_DEF_RRC_pathlossReferenceLinking_tags_68,	/* Same as above */
	sizeof(asn_DEF_RRC_pathlossReferenceLinking_tags_68)
		/sizeof(asn_DEF_RRC_pathlossReferenceLinking_tags_68[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_pathlossReferenceLinking_constr_68, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_pathlossReferenceLinking_specs_68	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_rateMatchPatternToAddModList_75[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RRC_RateMatchPattern,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_rateMatchPatternToAddModList_tags_75[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_RRC_rateMatchPatternToAddModList_specs_75 = {
	sizeof(struct RRC_ServingCellConfig__ext1__rateMatchPatternToAddModList),
	offsetof(struct RRC_ServingCellConfig__ext1__rateMatchPatternToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_rateMatchPatternToAddModList_75 = {
	"rateMatchPatternToAddModList",
	"rateMatchPatternToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_RRC_rateMatchPatternToAddModList_tags_75,
	sizeof(asn_DEF_RRC_rateMatchPatternToAddModList_tags_75)
		/sizeof(asn_DEF_RRC_rateMatchPatternToAddModList_tags_75[0]) - 1, /* 1 */
	asn_DEF_RRC_rateMatchPatternToAddModList_tags_75,	/* Same as above */
	sizeof(asn_DEF_RRC_rateMatchPatternToAddModList_tags_75)
		/sizeof(asn_DEF_RRC_rateMatchPatternToAddModList_tags_75[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_rateMatchPatternToAddModList_constr_75, SEQUENCE_OF_constraint },
	asn_MBR_RRC_rateMatchPatternToAddModList_75,
	1,	/* Single element */
	&asn_SPC_RRC_rateMatchPatternToAddModList_specs_75	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_rateMatchPatternToReleaseList_77[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_RRC_RateMatchPatternId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_rateMatchPatternToReleaseList_tags_77[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_RRC_rateMatchPatternToReleaseList_specs_77 = {
	sizeof(struct RRC_ServingCellConfig__ext1__rateMatchPatternToReleaseList),
	offsetof(struct RRC_ServingCellConfig__ext1__rateMatchPatternToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_rateMatchPatternToReleaseList_77 = {
	"rateMatchPatternToReleaseList",
	"rateMatchPatternToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_RRC_rateMatchPatternToReleaseList_tags_77,
	sizeof(asn_DEF_RRC_rateMatchPatternToReleaseList_tags_77)
		/sizeof(asn_DEF_RRC_rateMatchPatternToReleaseList_tags_77[0]) - 1, /* 1 */
	asn_DEF_RRC_rateMatchPatternToReleaseList_tags_77,	/* Same as above */
	sizeof(asn_DEF_RRC_rateMatchPatternToReleaseList_tags_77)
		/sizeof(asn_DEF_RRC_rateMatchPatternToReleaseList_tags_77[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_rateMatchPatternToReleaseList_constr_77, SEQUENCE_OF_constraint },
	asn_MBR_RRC_rateMatchPatternToReleaseList_77,
	1,	/* Single element */
	&asn_SPC_RRC_rateMatchPatternToReleaseList_specs_77	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_downlinkChannelBW_PerSCS_List_79[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RRC_SCS_SpecificCarrier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_downlinkChannelBW_PerSCS_List_tags_79[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_RRC_downlinkChannelBW_PerSCS_List_specs_79 = {
	sizeof(struct RRC_ServingCellConfig__ext1__downlinkChannelBW_PerSCS_List),
	offsetof(struct RRC_ServingCellConfig__ext1__downlinkChannelBW_PerSCS_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_downlinkChannelBW_PerSCS_List_79 = {
	"downlinkChannelBW-PerSCS-List",
	"downlinkChannelBW-PerSCS-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_RRC_downlinkChannelBW_PerSCS_List_tags_79,
	sizeof(asn_DEF_RRC_downlinkChannelBW_PerSCS_List_tags_79)
		/sizeof(asn_DEF_RRC_downlinkChannelBW_PerSCS_List_tags_79[0]) - 1, /* 1 */
	asn_DEF_RRC_downlinkChannelBW_PerSCS_List_tags_79,	/* Same as above */
	sizeof(asn_DEF_RRC_downlinkChannelBW_PerSCS_List_tags_79)
		/sizeof(asn_DEF_RRC_downlinkChannelBW_PerSCS_List_tags_79[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_downlinkChannelBW_PerSCS_List_constr_79, SEQUENCE_OF_constraint },
	asn_MBR_RRC_downlinkChannelBW_PerSCS_List_79,
	1,	/* Single element */
	&asn_SPC_RRC_downlinkChannelBW_PerSCS_List_specs_79	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_ext1_73[] = {
	{ ATF_POINTER, 4, offsetof(struct RRC_ServingCellConfig__ext1, lte_CRS_ToMatchAround),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_SetupRelease_RateMatchPatternLTE_CRS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lte-CRS-ToMatchAround"
		},
	{ ATF_POINTER, 3, offsetof(struct RRC_ServingCellConfig__ext1, rateMatchPatternToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_RRC_rateMatchPatternToAddModList_75,
		0,
		{ 0, &asn_PER_memb_RRC_rateMatchPatternToAddModList_constr_75,  memb_RRC_rateMatchPatternToAddModList_constraint_73 },
		0, 0, /* No default value */
		"rateMatchPatternToAddModList"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_ServingCellConfig__ext1, rateMatchPatternToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_RRC_rateMatchPatternToReleaseList_77,
		0,
		{ 0, &asn_PER_memb_RRC_rateMatchPatternToReleaseList_constr_77,  memb_RRC_rateMatchPatternToReleaseList_constraint_73 },
		0, 0, /* No default value */
		"rateMatchPatternToReleaseList"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_ServingCellConfig__ext1, downlinkChannelBW_PerSCS_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_RRC_downlinkChannelBW_PerSCS_List_79,
		0,
		{ 0, &asn_PER_memb_RRC_downlinkChannelBW_PerSCS_List_constr_79,  memb_RRC_downlinkChannelBW_PerSCS_List_constraint_73 },
		0, 0, /* No default value */
		"downlinkChannelBW-PerSCS-List"
		},
};
static const int asn_MAP_RRC_ext1_oms_73[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_RRC_ext1_tags_73[] = {
	(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_ext1_tag2el_73[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lte-CRS-ToMatchAround */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rateMatchPatternToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rateMatchPatternToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* downlinkChannelBW-PerSCS-List */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_ext1_specs_73 = {
	sizeof(struct RRC_ServingCellConfig__ext1),
	offsetof(struct RRC_ServingCellConfig__ext1, _asn_ctx),
	asn_MAP_RRC_ext1_tag2el_73,
	4,	/* Count of tags in the map */
	asn_MAP_RRC_ext1_oms_73,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_ext1_73 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_ext1_tags_73,
	sizeof(asn_DEF_RRC_ext1_tags_73)
		/sizeof(asn_DEF_RRC_ext1_tags_73[0]) - 1, /* 1 */
	asn_DEF_RRC_ext1_tags_73,	/* Same as above */
	sizeof(asn_DEF_RRC_ext1_tags_73)
		/sizeof(asn_DEF_RRC_ext1_tags_73[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_ext1_73,
	4,	/* Elements count */
	&asn_SPC_RRC_ext1_specs_73	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_ServingCellConfig_1[] = {
	{ ATF_POINTER, 14, offsetof(struct RRC_ServingCellConfig, tdd_UL_DL_ConfigurationDedicated),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TDD_UL_DL_ConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-UL-DL-ConfigurationDedicated"
		},
	{ ATF_POINTER, 13, offsetof(struct RRC_ServingCellConfig, initialDownlinkBWP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_BWP_DownlinkDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"initialDownlinkBWP"
		},
	{ ATF_POINTER, 12, offsetof(struct RRC_ServingCellConfig, downlinkBWP_ToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_RRC_downlinkBWP_ToReleaseList_4,
		0,
		{ 0, &asn_PER_memb_RRC_downlinkBWP_ToReleaseList_constr_4,  memb_RRC_downlinkBWP_ToReleaseList_constraint_1 },
		0, 0, /* No default value */
		"downlinkBWP-ToReleaseList"
		},
	{ ATF_POINTER, 11, offsetof(struct RRC_ServingCellConfig, downlinkBWP_ToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_RRC_downlinkBWP_ToAddModList_6,
		0,
		{ 0, &asn_PER_memb_RRC_downlinkBWP_ToAddModList_constr_6,  memb_RRC_downlinkBWP_ToAddModList_constraint_1 },
		0, 0, /* No default value */
		"downlinkBWP-ToAddModList"
		},
	{ ATF_POINTER, 10, offsetof(struct RRC_ServingCellConfig, firstActiveDownlinkBWP_Id),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_BWP_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"firstActiveDownlinkBWP-Id"
		},
	{ ATF_POINTER, 9, offsetof(struct RRC_ServingCellConfig, bwp_InactivityTimer),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_bwp_InactivityTimer_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bwp-InactivityTimer"
		},
	{ ATF_POINTER, 8, offsetof(struct RRC_ServingCellConfig, defaultDownlinkBWP_Id),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_BWP_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultDownlinkBWP-Id"
		},
	{ ATF_POINTER, 7, offsetof(struct RRC_ServingCellConfig, uplinkConfig),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_UplinkConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkConfig"
		},
	{ ATF_POINTER, 6, offsetof(struct RRC_ServingCellConfig, supplementaryUplink),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_UplinkConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supplementaryUplink"
		},
	{ ATF_POINTER, 5, offsetof(struct RRC_ServingCellConfig, pdcch_ServingCellConfig),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_SetupRelease_PDCCH_ServingCellConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-ServingCellConfig"
		},
	{ ATF_POINTER, 4, offsetof(struct RRC_ServingCellConfig, pdsch_ServingCellConfig),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_SetupRelease_PDSCH_ServingCellConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ServingCellConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct RRC_ServingCellConfig, csi_MeasConfig),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_SetupRelease_CSI_MeasConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-MeasConfig"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_ServingCellConfig, sCellDeactivationTimer),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_sCellDeactivationTimer_47,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellDeactivationTimer"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_ServingCellConfig, crossCarrierSchedulingConfig),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_CrossCarrierSchedulingConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crossCarrierSchedulingConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_ServingCellConfig, tag_Id),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TAG_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tag-Id"
		},
	{ ATF_POINTER, 4, offsetof(struct RRC_ServingCellConfig, dummy),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_dummy_66,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
	{ ATF_POINTER, 3, offsetof(struct RRC_ServingCellConfig, pathlossReferenceLinking),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_pathlossReferenceLinking_68,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pathlossReferenceLinking"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_ServingCellConfig, servingCellMO),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_MeasObjectId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingCellMO"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_ServingCellConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		0,
		&asn_DEF_RRC_ext1_73,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_RRC_ServingCellConfig_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17, 18 };
static const ber_tlv_tag_t asn_DEF_RRC_ServingCellConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_ServingCellConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd-UL-DL-ConfigurationDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* initialDownlinkBWP */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* downlinkBWP-ToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* downlinkBWP-ToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* firstActiveDownlinkBWP-Id */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* bwp-InactivityTimer */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* defaultDownlinkBWP-Id */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* uplinkConfig */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* supplementaryUplink */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* pdcch-ServingCellConfig */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* pdsch-ServingCellConfig */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* csi-MeasConfig */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* sCellDeactivationTimer */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* crossCarrierSchedulingConfig */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* tag-Id */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* pathlossReferenceLinking */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* servingCellMO */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_ServingCellConfig_specs_1 = {
	sizeof(struct RRC_ServingCellConfig),
	offsetof(struct RRC_ServingCellConfig, _asn_ctx),
	asn_MAP_RRC_ServingCellConfig_tag2el_1,
	19,	/* Count of tags in the map */
	asn_MAP_RRC_ServingCellConfig_oms_1,	/* Optional members */
	17, 1,	/* Root/Additions */
	18,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_ServingCellConfig = {
	"ServingCellConfig",
	"ServingCellConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_ServingCellConfig_tags_1,
	sizeof(asn_DEF_RRC_ServingCellConfig_tags_1)
		/sizeof(asn_DEF_RRC_ServingCellConfig_tags_1[0]), /* 1 */
	asn_DEF_RRC_ServingCellConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_ServingCellConfig_tags_1)
		/sizeof(asn_DEF_RRC_ServingCellConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_ServingCellConfig_1,
	19,	/* Elements count */
	&asn_SPC_RRC_ServingCellConfig_specs_1	/* Additional specs */
};

