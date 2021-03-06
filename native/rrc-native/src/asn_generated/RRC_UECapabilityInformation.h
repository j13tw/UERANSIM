/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_UECapabilityInformation_H_
#define	_RRC_UECapabilityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_RRC-TransactionIdentifier.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_UECapabilityInformation__criticalExtensions_PR {
	RRC_UECapabilityInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	RRC_UECapabilityInformation__criticalExtensions_PR_ueCapabilityInformation,
	RRC_UECapabilityInformation__criticalExtensions_PR_criticalExtensionsFuture
} RRC_UECapabilityInformation__criticalExtensions_PR;

/* Forward declarations */
struct RRC_UECapabilityInformation_IEs;

/* RRC_UECapabilityInformation */
typedef struct RRC_UECapabilityInformation {
	RRC_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRC_UECapabilityInformation__criticalExtensions {
		RRC_UECapabilityInformation__criticalExtensions_PR present;
		union RRC_UECapabilityInformation__RRC_criticalExtensions_u {
			struct RRC_UECapabilityInformation_IEs	*ueCapabilityInformation;
			struct RRC_UECapabilityInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_UECapabilityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_UECapabilityInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_UECapabilityInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_UECapabilityInformation_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_UECapabilityInformation_H_ */
#include <asn_internal.h>
