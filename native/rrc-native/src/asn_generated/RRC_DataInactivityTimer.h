/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_DataInactivityTimer_H_
#define	_RRC_DataInactivityTimer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_DataInactivityTimer {
	RRC_DataInactivityTimer_s1	= 0,
	RRC_DataInactivityTimer_s2	= 1,
	RRC_DataInactivityTimer_s3	= 2,
	RRC_DataInactivityTimer_s5	= 3,
	RRC_DataInactivityTimer_s7	= 4,
	RRC_DataInactivityTimer_s10	= 5,
	RRC_DataInactivityTimer_s15	= 6,
	RRC_DataInactivityTimer_s20	= 7,
	RRC_DataInactivityTimer_s40	= 8,
	RRC_DataInactivityTimer_s50	= 9,
	RRC_DataInactivityTimer_s60	= 10,
	RRC_DataInactivityTimer_s80	= 11,
	RRC_DataInactivityTimer_s100	= 12,
	RRC_DataInactivityTimer_s120	= 13,
	RRC_DataInactivityTimer_s150	= 14,
	RRC_DataInactivityTimer_s180	= 15
} e_RRC_DataInactivityTimer;

/* RRC_DataInactivityTimer */
typedef long	 RRC_DataInactivityTimer_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRC_DataInactivityTimer_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRC_DataInactivityTimer;
extern const asn_INTEGER_specifics_t asn_SPC_RRC_DataInactivityTimer_specs_1;
asn_struct_free_f RRC_DataInactivityTimer_free;
asn_struct_print_f RRC_DataInactivityTimer_print;
asn_constr_check_f RRC_DataInactivityTimer_constraint;
ber_type_decoder_f RRC_DataInactivityTimer_decode_ber;
der_type_encoder_f RRC_DataInactivityTimer_encode_der;
xer_type_decoder_f RRC_DataInactivityTimer_decode_xer;
xer_type_encoder_f RRC_DataInactivityTimer_encode_xer;
per_type_decoder_f RRC_DataInactivityTimer_decode_uper;
per_type_encoder_f RRC_DataInactivityTimer_encode_uper;
per_type_decoder_f RRC_DataInactivityTimer_decode_aper;
per_type_encoder_f RRC_DataInactivityTimer_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_DataInactivityTimer_H_ */
#include <asn_internal.h>