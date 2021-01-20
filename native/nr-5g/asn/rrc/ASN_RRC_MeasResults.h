/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_MeasResults_H_
#define	_ASN_RRC_MeasResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_RRC_MeasId.h"
#include "ASN_RRC_MeasResultServMOList.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_MeasResults__measResultNeighCells_PR {
	ASN_RRC_MeasResults__measResultNeighCells_PR_NOTHING,	/* No components present */
	ASN_RRC_MeasResults__measResultNeighCells_PR_measResultListNR,
	/* Extensions may appear below */
	ASN_RRC_MeasResults__measResultNeighCells_PR_measResultListEUTRA
} ASN_RRC_MeasResults__measResultNeighCells_PR;

/* Forward declarations */
struct ASN_RRC_MeasResultListNR;
struct ASN_RRC_MeasResultListEUTRA;
struct ASN_RRC_MeasResultServFreqListEUTRA_SCG;
struct ASN_RRC_MeasResultServFreqListNR_SCG;
struct ASN_RRC_MeasResultSFTD_EUTRA;
struct ASN_RRC_MeasResultCellSFTD_NR;

/* ASN_RRC_MeasResults */
typedef struct ASN_RRC_MeasResults {
	ASN_RRC_MeasId_t	 measId;
	ASN_RRC_MeasResultServMOList_t	 measResultServingMOList;
	struct ASN_RRC_MeasResults__measResultNeighCells {
		ASN_RRC_MeasResults__measResultNeighCells_PR present;
		union ASN_RRC_MeasResults__ASN_RRC_measResultNeighCells_u {
			struct ASN_RRC_MeasResultListNR	*measResultListNR;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct ASN_RRC_MeasResultListEUTRA	*measResultListEUTRA;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct ASN_RRC_MeasResults__ext1 {
		struct ASN_RRC_MeasResultServFreqListEUTRA_SCG	*measResultServFreqListEUTRA_SCG;	/* OPTIONAL */
		struct ASN_RRC_MeasResultServFreqListNR_SCG	*measResultServFreqListNR_SCG;	/* OPTIONAL */
		struct ASN_RRC_MeasResultSFTD_EUTRA	*measResultSFTD_EUTRA;	/* OPTIONAL */
		struct ASN_RRC_MeasResultCellSFTD_NR	*measResultSFTD_NR;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_MeasResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_MeasResults;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_MeasResults_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_MeasResults_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_MeasResults_H_ */
#include <asn_internal.h>
