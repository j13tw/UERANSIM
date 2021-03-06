/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_CellAccessRelatedInfo_H_
#define	_RRC_CellAccessRelatedInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_PLMN-IdentityInfoList.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_CellAccessRelatedInfo__cellReservedForOtherUse {
	RRC_CellAccessRelatedInfo__cellReservedForOtherUse_true	= 0
} e_RRC_CellAccessRelatedInfo__cellReservedForOtherUse;

/* RRC_CellAccessRelatedInfo */
typedef struct RRC_CellAccessRelatedInfo {
	RRC_PLMN_IdentityInfoList_t	 plmn_IdentityList;
	long	*cellReservedForOtherUse;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_CellAccessRelatedInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_cellReservedForOtherUse_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_CellAccessRelatedInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_CellAccessRelatedInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_CellAccessRelatedInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_CellAccessRelatedInfo_H_ */
#include <asn_internal.h>
