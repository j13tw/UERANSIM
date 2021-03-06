/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_AccessStratumRelease_H_
#define	_RRC_AccessStratumRelease_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_AccessStratumRelease {
	RRC_AccessStratumRelease_rel15	= 0,
	RRC_AccessStratumRelease_spare7	= 1,
	RRC_AccessStratumRelease_spare6	= 2,
	RRC_AccessStratumRelease_spare5	= 3,
	RRC_AccessStratumRelease_spare4	= 4,
	RRC_AccessStratumRelease_spare3	= 5,
	RRC_AccessStratumRelease_spare2	= 6,
	RRC_AccessStratumRelease_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_RRC_AccessStratumRelease;

/* RRC_AccessStratumRelease */
typedef long	 RRC_AccessStratumRelease_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRC_AccessStratumRelease_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRC_AccessStratumRelease;
extern const asn_INTEGER_specifics_t asn_SPC_RRC_AccessStratumRelease_specs_1;
asn_struct_free_f RRC_AccessStratumRelease_free;
asn_struct_print_f RRC_AccessStratumRelease_print;
asn_constr_check_f RRC_AccessStratumRelease_constraint;
ber_type_decoder_f RRC_AccessStratumRelease_decode_ber;
der_type_encoder_f RRC_AccessStratumRelease_encode_der;
xer_type_decoder_f RRC_AccessStratumRelease_decode_xer;
xer_type_encoder_f RRC_AccessStratumRelease_encode_xer;
per_type_decoder_f RRC_AccessStratumRelease_decode_uper;
per_type_encoder_f RRC_AccessStratumRelease_encode_uper;
per_type_decoder_f RRC_AccessStratumRelease_decode_aper;
per_type_encoder_f RRC_AccessStratumRelease_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_AccessStratumRelease_H_ */
#include <asn_internal.h>
