/*
 * fcml_common_lex.h
 *
 *  Created on: Nov 16, 2013
 *      Author: tas
 */

#ifndef FCML_COMMON_LEX_H_
#define FCML_COMMON_LEX_H_

#include "fcml_common.h"
#include "fcml_env_int.h"
#include "fcml_types.h"
#include "fcml_parser_utils.h"

/*GPR*/
#define FCML_FM_GPRS_8_REG(x)					{ fcml_fn_pu_parse_register( FCML_REG_GPR, FCML_DS_8, x, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_GPR; }
#define FCML_FM_GPRS_8_X_REG(x)					{ fcml_fn_pu_parse_register( FCML_REG_GPR, FCML_DS_8, x, FCML_TRUE, &(yylval->reg_value) ); return FCML_TK_REG_GPR; }
#define FCML_FM_GPRS_16_REG(x)					{ fcml_fn_pu_parse_register( FCML_REG_GPR, FCML_DS_16, x, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_GPR; }
#define FCML_FM_GPRS_32_REG(x)					{ fcml_fn_pu_parse_register( FCML_REG_GPR, FCML_DS_32, x, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_GPR; }
#define FCML_FM_GPRS_64_REG(x)					{ fcml_fn_pu_parse_register( FCML_REG_GPR, FCML_DS_64, x, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_GPR; }
/*SIMD*/
#define FCML_FM_SIMD_64_REG(x)					{ fcml_fn_pu_parse_register( FCML_REG_SIMD, FCML_DS_64, x, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_SIMD; }
#define FCML_FM_SIMD_128_REG(x)					{ fcml_fn_pu_parse_register( FCML_REG_SIMD, FCML_DS_128, x, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_SIMD; }
#define FCML_FM_SIMD_256_REG(x)					{ fcml_fn_pu_parse_register( FCML_REG_SIMD, FCML_DS_256, x, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_SIMD; }
/*FPU*/
#define FCML_FM_FPU_REG(x)						{ fcml_fn_pu_parse_register( FCML_REG_FPU, FCML_DS_UNDEF, x, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_FPU; }
/*Control registers.*/
#define FCML_FM_CR_REG(x)						{ fcml_fn_pu_parse_register( FCML_REG_CR, FCML_DS_UNDEF, x, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_CR; }
/*Debug registers.*/
#define FCML_FM_DR_REG(x)						{ fcml_fn_pu_parse_register( FCML_REG_DR, FCML_DS_UNDEF, x, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_DR; }
/*Segment registers.*/
#define FCML_FM_SEG_REG(x)						{ fcml_fn_pu_parse_register( FCML_REG_SEG, FCML_DS_UNDEF, x, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_SEG; }
/*RIP*/
#define FCML_FM_RIP								{ fcml_fn_pu_parse_register( FCML_REG_IP, FCML_DS_64, FCML_REG_UNDEFINED, FCML_FALSE, &(yylval->reg_value) ); return FCML_TK_REG_RIP; }

#endif /* FCML_COMMON_LEX_H_ */
