/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_UE_MRDC_Capability_H_
#define	_RRC_UE_MRDC_Capability_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_RF-ParametersMRDC.h"
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_MeasAndMobParametersMRDC;
struct RRC_Phy_ParametersMRDC;
struct RRC_GeneralParametersMRDC_XDD_Diff;
struct RRC_UE_MRDC_CapabilityAddXDD_Mode;
struct RRC_UE_MRDC_CapabilityAddFRX_Mode;
struct RRC_PDCP_ParametersMRDC;
struct RRC_UE_MRDC_Capability_v1560;
struct RRC_FeatureSetCombination;

/* RRC_UE-MRDC-Capability */
typedef struct RRC_UE_MRDC_Capability {
	struct RRC_MeasAndMobParametersMRDC	*measAndMobParametersMRDC;	/* OPTIONAL */
	struct RRC_Phy_ParametersMRDC	*phy_ParametersMRDC_v1530;	/* OPTIONAL */
	RRC_RF_ParametersMRDC_t	 rf_ParametersMRDC;
	struct RRC_GeneralParametersMRDC_XDD_Diff	*generalParametersMRDC;	/* OPTIONAL */
	struct RRC_UE_MRDC_CapabilityAddXDD_Mode	*fdd_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct RRC_UE_MRDC_CapabilityAddXDD_Mode	*tdd_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct RRC_UE_MRDC_CapabilityAddFRX_Mode	*fr1_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct RRC_UE_MRDC_CapabilityAddFRX_Mode	*fr2_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct RRC_UE_MRDC_Capability__featureSetCombinations {
		A_SEQUENCE_OF(struct RRC_FeatureSetCombination) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetCombinations;
	struct RRC_PDCP_ParametersMRDC	*pdcp_ParametersMRDC_v1530;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRC_UE_MRDC_Capability_v1560	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_UE_MRDC_Capability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_UE_MRDC_Capability;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_UE_MRDC_Capability_H_ */
#include <asn_internal.h>
