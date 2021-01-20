/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_CA_BandwidthClassNR_H_
#define	_ASN_RRC_CA_BandwidthClassNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_CA_BandwidthClassNR {
	ASN_RRC_CA_BandwidthClassNR_a	= 0,
	ASN_RRC_CA_BandwidthClassNR_b	= 1,
	ASN_RRC_CA_BandwidthClassNR_c	= 2,
	ASN_RRC_CA_BandwidthClassNR_d	= 3,
	ASN_RRC_CA_BandwidthClassNR_e	= 4,
	ASN_RRC_CA_BandwidthClassNR_f	= 5,
	ASN_RRC_CA_BandwidthClassNR_g	= 6,
	ASN_RRC_CA_BandwidthClassNR_h	= 7,
	ASN_RRC_CA_BandwidthClassNR_i	= 8,
	ASN_RRC_CA_BandwidthClassNR_j	= 9,
	ASN_RRC_CA_BandwidthClassNR_k	= 10,
	ASN_RRC_CA_BandwidthClassNR_l	= 11,
	ASN_RRC_CA_BandwidthClassNR_m	= 12,
	ASN_RRC_CA_BandwidthClassNR_n	= 13,
	ASN_RRC_CA_BandwidthClassNR_o	= 14,
	ASN_RRC_CA_BandwidthClassNR_p	= 15,
	ASN_RRC_CA_BandwidthClassNR_q	= 16
	/*
	 * Enumeration is extensible
	 */
} e_ASN_RRC_CA_BandwidthClassNR;

/* ASN_RRC_CA-BandwidthClassNR */
typedef long	 ASN_RRC_CA_BandwidthClassNR_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_RRC_CA_BandwidthClassNR_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_CA_BandwidthClassNR;
extern const asn_INTEGER_specifics_t asn_SPC_ASN_RRC_CA_BandwidthClassNR_specs_1;
asn_struct_free_f ASN_RRC_CA_BandwidthClassNR_free;
asn_struct_print_f ASN_RRC_CA_BandwidthClassNR_print;
asn_constr_check_f ASN_RRC_CA_BandwidthClassNR_constraint;
ber_type_decoder_f ASN_RRC_CA_BandwidthClassNR_decode_ber;
der_type_encoder_f ASN_RRC_CA_BandwidthClassNR_encode_der;
xer_type_decoder_f ASN_RRC_CA_BandwidthClassNR_decode_xer;
xer_type_encoder_f ASN_RRC_CA_BandwidthClassNR_encode_xer;
per_type_decoder_f ASN_RRC_CA_BandwidthClassNR_decode_uper;
per_type_encoder_f ASN_RRC_CA_BandwidthClassNR_encode_uper;
per_type_decoder_f ASN_RRC_CA_BandwidthClassNR_decode_aper;
per_type_encoder_f ASN_RRC_CA_BandwidthClassNR_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_CA_BandwidthClassNR_H_ */
#include <asn_internal.h>
