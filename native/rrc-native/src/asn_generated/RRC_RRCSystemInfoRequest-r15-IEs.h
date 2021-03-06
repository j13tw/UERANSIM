/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_RRCSystemInfoRequest_r15_IEs_H_
#define	_RRC_RRCSystemInfoRequest_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_RRCSystemInfoRequest-r15-IEs */
typedef struct RRC_RRCSystemInfoRequest_r15_IEs {
	BIT_STRING_t	 requested_SI_List;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_RRCSystemInfoRequest_r15_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_RRCSystemInfoRequest_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_RRCSystemInfoRequest_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_RRCSystemInfoRequest_r15_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_RRCSystemInfoRequest_r15_IEs_H_ */
#include <asn_internal.h>
