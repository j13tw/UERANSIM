/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_SupportedBandwidth_H_
#define	_RRC_SupportedBandwidth_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_SupportedBandwidth_PR {
	RRC_SupportedBandwidth_PR_NOTHING,	/* No components present */
	RRC_SupportedBandwidth_PR_fr1,
	RRC_SupportedBandwidth_PR_fr2
} RRC_SupportedBandwidth_PR;
typedef enum RRC_SupportedBandwidth__fr1 {
	RRC_SupportedBandwidth__fr1_mhz5	= 0,
	RRC_SupportedBandwidth__fr1_mhz10	= 1,
	RRC_SupportedBandwidth__fr1_mhz15	= 2,
	RRC_SupportedBandwidth__fr1_mhz20	= 3,
	RRC_SupportedBandwidth__fr1_mhz25	= 4,
	RRC_SupportedBandwidth__fr1_mhz30	= 5,
	RRC_SupportedBandwidth__fr1_mhz40	= 6,
	RRC_SupportedBandwidth__fr1_mhz50	= 7,
	RRC_SupportedBandwidth__fr1_mhz60	= 8,
	RRC_SupportedBandwidth__fr1_mhz80	= 9,
	RRC_SupportedBandwidth__fr1_mhz100	= 10
} e_RRC_SupportedBandwidth__fr1;
typedef enum RRC_SupportedBandwidth__fr2 {
	RRC_SupportedBandwidth__fr2_mhz50	= 0,
	RRC_SupportedBandwidth__fr2_mhz100	= 1,
	RRC_SupportedBandwidth__fr2_mhz200	= 2,
	RRC_SupportedBandwidth__fr2_mhz400	= 3
} e_RRC_SupportedBandwidth__fr2;

/* RRC_SupportedBandwidth */
typedef struct RRC_SupportedBandwidth {
	RRC_SupportedBandwidth_PR present;
	union RRC_SupportedBandwidth_u {
		long	 fr1;
		long	 fr2;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_SupportedBandwidth_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_fr1_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_fr2_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_SupportedBandwidth;
extern asn_CHOICE_specifics_t asn_SPC_RRC_SupportedBandwidth_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_SupportedBandwidth_1[2];
extern asn_per_constraints_t asn_PER_type_RRC_SupportedBandwidth_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_SupportedBandwidth_H_ */
#include <asn_internal.h>
