/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_ReportConfigNR_H_
#define	_RRC_ReportConfigNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_ReportSFTD-NR.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_ReportConfigNR__reportType_PR {
	RRC_ReportConfigNR__reportType_PR_NOTHING,	/* No components present */
	RRC_ReportConfigNR__reportType_PR_periodical,
	RRC_ReportConfigNR__reportType_PR_eventTriggered,
	/* Extensions may appear below */
	RRC_ReportConfigNR__reportType_PR_reportCGI,
	RRC_ReportConfigNR__reportType_PR_ext1
} RRC_ReportConfigNR__reportType_PR;

/* Forward declarations */
struct RRC_PeriodicalReportConfig;
struct RRC_EventTriggerConfig;
struct RRC_ReportCGI;

/* RRC_ReportConfigNR */
typedef struct RRC_ReportConfigNR {
	struct RRC_ReportConfigNR__reportType {
		RRC_ReportConfigNR__reportType_PR present;
		union RRC_ReportConfigNR__RRC_reportType_u {
			struct RRC_PeriodicalReportConfig	*periodical;
			struct RRC_EventTriggerConfig	*eventTriggered;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct RRC_ReportCGI	*reportCGI;
			struct RRC_ReportConfigNR__reportType__ext1 {
				RRC_ReportSFTD_NR_t	 reportSFTD;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ext1;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_ReportConfigNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_ReportConfigNR;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_ReportConfigNR_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_ReportConfigNR_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_ReportConfigNR_H_ */
#include <asn_internal.h>
