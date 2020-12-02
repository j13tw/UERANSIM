/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_RRCRelease_IEs_H_
#define	_RRC_RRCRelease_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_RRCRelease_IEs__deprioritisationReq__deprioritisationType {
	RRC_RRCRelease_IEs__deprioritisationReq__deprioritisationType_frequency	= 0,
	RRC_RRCRelease_IEs__deprioritisationReq__deprioritisationType_nr	= 1
} e_RRC_RRCRelease_IEs__deprioritisationReq__deprioritisationType;
typedef enum RRC_RRCRelease_IEs__deprioritisationReq__deprioritisationTimer {
	RRC_RRCRelease_IEs__deprioritisationReq__deprioritisationTimer_min5	= 0,
	RRC_RRCRelease_IEs__deprioritisationReq__deprioritisationTimer_min10	= 1,
	RRC_RRCRelease_IEs__deprioritisationReq__deprioritisationTimer_min15	= 2,
	RRC_RRCRelease_IEs__deprioritisationReq__deprioritisationTimer_min30	= 3
} e_RRC_RRCRelease_IEs__deprioritisationReq__deprioritisationTimer;

/* Forward declarations */
struct RRC_RedirectedCarrierInfo;
struct RRC_CellReselectionPriorities;
struct RRC_SuspendConfig;
struct RRC_RRCRelease_v1540_IEs;

/* RRC_RRCRelease-IEs */
typedef struct RRC_RRCRelease_IEs {
	struct RRC_RedirectedCarrierInfo	*redirectedCarrierInfo;	/* OPTIONAL */
	struct RRC_CellReselectionPriorities	*cellReselectionPriorities;	/* OPTIONAL */
	struct RRC_SuspendConfig	*suspendConfig;	/* OPTIONAL */
	struct RRC_RRCRelease_IEs__deprioritisationReq {
		long	 deprioritisationType;
		long	 deprioritisationTimer;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *deprioritisationReq;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRC_RRCRelease_v1540_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_RRCRelease_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_deprioritisationType_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_deprioritisationTimer_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_RRCRelease_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_RRCRelease_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_RRCRelease_IEs_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_RRCRelease_IEs_H_ */
#include <asn_internal.h>