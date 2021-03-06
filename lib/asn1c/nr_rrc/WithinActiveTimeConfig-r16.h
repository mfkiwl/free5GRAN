/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_WithinActiveTimeConfig_r16_H_
#define	_WithinActiveTimeConfig_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BWP-Id.h"
#include "DormancyGroupID-r16.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* WithinActiveTimeConfig-r16 */
typedef struct WithinActiveTimeConfig_r16 {
	BWP_Id_t	*firstWithinActiveTimeBWP_Id_r16	/* OPTIONAL */;
	DormancyGroupID_r16_t	*dormancyGroupWithinActiveTime_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WithinActiveTimeConfig_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WithinActiveTimeConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_WithinActiveTimeConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_WithinActiveTimeConfig_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _WithinActiveTimeConfig_r16_H_ */
#include "asn_internal.h"
