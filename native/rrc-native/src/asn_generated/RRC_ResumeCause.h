/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_ResumeCause_H_
#define	_RRC_ResumeCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_ResumeCause {
	RRC_ResumeCause_emergency	= 0,
	RRC_ResumeCause_highPriorityAccess	= 1,
	RRC_ResumeCause_mt_Access	= 2,
	RRC_ResumeCause_mo_Signalling	= 3,
	RRC_ResumeCause_mo_Data	= 4,
	RRC_ResumeCause_mo_VoiceCall	= 5,
	RRC_ResumeCause_mo_VideoCall	= 6,
	RRC_ResumeCause_mo_SMS	= 7,
	RRC_ResumeCause_rna_Update	= 8,
	RRC_ResumeCause_mps_PriorityAccess	= 9,
	RRC_ResumeCause_mcs_PriorityAccess	= 10,
	RRC_ResumeCause_spare1	= 11,
	RRC_ResumeCause_spare2	= 12,
	RRC_ResumeCause_spare3	= 13,
	RRC_ResumeCause_spare4	= 14,
	RRC_ResumeCause_spare5	= 15
} e_RRC_ResumeCause;

/* RRC_ResumeCause */
typedef long	 RRC_ResumeCause_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRC_ResumeCause_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRC_ResumeCause;
extern const asn_INTEGER_specifics_t asn_SPC_RRC_ResumeCause_specs_1;
asn_struct_free_f RRC_ResumeCause_free;
asn_struct_print_f RRC_ResumeCause_print;
asn_constr_check_f RRC_ResumeCause_constraint;
ber_type_decoder_f RRC_ResumeCause_decode_ber;
der_type_encoder_f RRC_ResumeCause_encode_der;
xer_type_decoder_f RRC_ResumeCause_decode_xer;
xer_type_encoder_f RRC_ResumeCause_encode_xer;
per_type_decoder_f RRC_ResumeCause_decode_uper;
per_type_encoder_f RRC_ResumeCause_encode_uper;
per_type_decoder_f RRC_ResumeCause_decode_aper;
per_type_encoder_f RRC_ResumeCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_ResumeCause_H_ */
#include <asn_internal.h>
