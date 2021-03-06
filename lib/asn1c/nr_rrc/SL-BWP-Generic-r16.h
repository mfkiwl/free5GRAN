/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SL_BWP_Generic_r16_H_
#define	_SL_BWP_Generic_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "NULL.h"
#include "SL-PSBCH-Config-r16.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_BWP_Generic_r16__sl_LengthSymbols_r16 {
	SL_BWP_Generic_r16__sl_LengthSymbols_r16_sym7	= 0,
	SL_BWP_Generic_r16__sl_LengthSymbols_r16_sym8	= 1,
	SL_BWP_Generic_r16__sl_LengthSymbols_r16_sym9	= 2,
	SL_BWP_Generic_r16__sl_LengthSymbols_r16_sym10	= 3,
	SL_BWP_Generic_r16__sl_LengthSymbols_r16_sym11	= 4,
	SL_BWP_Generic_r16__sl_LengthSymbols_r16_sym12	= 5,
	SL_BWP_Generic_r16__sl_LengthSymbols_r16_sym13	= 6,
	SL_BWP_Generic_r16__sl_LengthSymbols_r16_sym14	= 7
} e_SL_BWP_Generic_r16__sl_LengthSymbols_r16;
typedef enum SL_BWP_Generic_r16__sl_StartSymbol_r16 {
	SL_BWP_Generic_r16__sl_StartSymbol_r16_sym0	= 0,
	SL_BWP_Generic_r16__sl_StartSymbol_r16_sym1	= 1,
	SL_BWP_Generic_r16__sl_StartSymbol_r16_sym2	= 2,
	SL_BWP_Generic_r16__sl_StartSymbol_r16_sym3	= 3,
	SL_BWP_Generic_r16__sl_StartSymbol_r16_sym4	= 4,
	SL_BWP_Generic_r16__sl_StartSymbol_r16_sym5	= 5,
	SL_BWP_Generic_r16__sl_StartSymbol_r16_sym6	= 6,
	SL_BWP_Generic_r16__sl_StartSymbol_r16_sym7	= 7
} e_SL_BWP_Generic_r16__sl_StartSymbol_r16;
typedef enum SL_BWP_Generic_r16__sl_PSBCH_Config_r16_PR {
	SL_BWP_Generic_r16__sl_PSBCH_Config_r16_PR_NOTHING,	/* No components present */
	SL_BWP_Generic_r16__sl_PSBCH_Config_r16_PR_release,
	SL_BWP_Generic_r16__sl_PSBCH_Config_r16_PR_setup
} SL_BWP_Generic_r16__sl_PSBCH_Config_r16_PR;

/* Forward declarations */
struct BWP;

/* SL-BWP-Generic-r16 */
typedef struct SL_BWP_Generic_r16 {
	struct BWP	*sl_BWP_r16	/* OPTIONAL */;
	long	*sl_LengthSymbols_r16	/* OPTIONAL */;
	long	*sl_StartSymbol_r16	/* OPTIONAL */;
	struct SL_BWP_Generic_r16__sl_PSBCH_Config_r16 {
		SL_BWP_Generic_r16__sl_PSBCH_Config_r16_PR present;
		union SL_BWP_Generic_r16__sl_PSBCH_Config_r16_u {
			NULL_t	 release;
			SL_PSBCH_Config_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_PSBCH_Config_r16;
	long	*sl_TxDirectCurrentLocation_r16	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_BWP_Generic_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_LengthSymbols_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_StartSymbol_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_BWP_Generic_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_BWP_Generic_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_BWP_Generic_r16_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BWP.h"

#endif	/* _SL_BWP_Generic_r16_H_ */
#include "asn_internal.h"
