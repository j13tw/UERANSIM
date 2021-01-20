/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_SecurityModeComplete_H_
#define	_ASN_RRC_SecurityModeComplete_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_RRC_RRC-TransactionIdentifier.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_SecurityModeComplete__criticalExtensions_PR {
	ASN_RRC_SecurityModeComplete__criticalExtensions_PR_NOTHING,	/* No components present */
	ASN_RRC_SecurityModeComplete__criticalExtensions_PR_securityModeComplete,
	ASN_RRC_SecurityModeComplete__criticalExtensions_PR_criticalExtensionsFuture
} ASN_RRC_SecurityModeComplete__criticalExtensions_PR;

/* Forward declarations */
struct ASN_RRC_SecurityModeComplete_IEs;

/* ASN_RRC_SecurityModeComplete */
typedef struct ASN_RRC_SecurityModeComplete {
	ASN_RRC_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct ASN_RRC_SecurityModeComplete__criticalExtensions {
		ASN_RRC_SecurityModeComplete__criticalExtensions_PR present;
		union ASN_RRC_SecurityModeComplete__ASN_RRC_criticalExtensions_u {
			struct ASN_RRC_SecurityModeComplete_IEs	*securityModeComplete;
			struct ASN_RRC_SecurityModeComplete__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_SecurityModeComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_SecurityModeComplete;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_SecurityModeComplete_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_SecurityModeComplete_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_SecurityModeComplete_H_ */
#include <asn_internal.h>
