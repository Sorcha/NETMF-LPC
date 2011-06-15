/* e_gost_err.c */
/* ====================================================================
 * Copyright (c) 1999-2009 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <openssl/err.h>
#include "e_gost_err.h"
#ifdef OPENSSL_SYS_WINDOWS
#include <stdio.h>
#endif

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

#define ERR_FUNC(func) ERR_PACK(0,func,0)
#define ERR_REASON(reason) ERR_PACK(0,0,reason)

static ERR_STRING_DATA GOST_str_functs[]=
	{
{ERR_FUNC(GOST_F_DECODE_GOST_ALGOR_PARAMS),	"DECODE_GOST_ALGOR_PARAMS"},
{ERR_FUNC(GOST_F_ENCODE_GOST_ALGOR_PARAMS),	"ENCODE_GOST_ALGOR_PARAMS"},
{ERR_FUNC(GOST_F_FILL_GOST2001_PARAMS),	"FILL_GOST2001_PARAMS"},
{ERR_FUNC(GOST_F_FILL_GOST94_PARAMS),	"FILL_GOST94_PARAMS"},
{ERR_FUNC(GOST_F_GET_ENCRYPTION_PARAMS),	"GET_ENCRYPTION_PARAMS"},
{ERR_FUNC(GOST_F_GOST2001_COMPUTE_PUBLIC),	"GOST2001_COMPUTE_PUBLIC"},
{ERR_FUNC(GOST_F_GOST2001_DO_SIGN),	"GOST2001_DO_SIGN"},
{ERR_FUNC(GOST_F_GOST2001_DO_VERIFY),	"GOST2001_DO_VERIFY"},
{ERR_FUNC(GOST_F_GOST2001_KEYGEN),	"GOST2001_KEYGEN"},
{ERR_FUNC(GOST_F_GOST89_GET_ASN1_PARAMETERS),	"GOST89_GET_ASN1_PARAMETERS"},
{ERR_FUNC(GOST_F_GOST89_SET_ASN1_PARAMETERS),	"GOST89_SET_ASN1_PARAMETERS"},
{ERR_FUNC(GOST_F_GOST94_COMPUTE_PUBLIC),	"GOST94_COMPUTE_PUBLIC"},
{ERR_FUNC(GOST_F_GOST_CIPHER_CTL),	"GOST_CIPHER_CTL"},
{ERR_FUNC(GOST_F_GOST_DO_SIGN),	"GOST_DO_SIGN"},
{ERR_FUNC(GOST_F_GOST_DO_VERIFY),	"GOST_DO_VERIFY"},
{ERR_FUNC(GOST_F_GOST_IMIT_CTRL),	"GOST_IMIT_CTRL"},
{ERR_FUNC(GOST_F_GOST_IMIT_FINAL),	"GOST_IMIT_FINAL"},
{ERR_FUNC(GOST_F_GOST_IMIT_UPDATE),	"GOST_IMIT_UPDATE"},
{ERR_FUNC(GOST_F_PARAM_COPY_GOST01),	"PARAM_COPY_GOST01"},
{ERR_FUNC(GOST_F_PARAM_COPY_GOST94),	"PARAM_COPY_GOST94"},
{ERR_FUNC(GOST_F_PKEY_GOST01CP_DECRYPT),	"PKEY_GOST01CP_DECRYPT"},
{ERR_FUNC(GOST_F_PKEY_GOST01CP_ENCRYPT),	"PKEY_GOST01CP_ENCRYPT"},
{ERR_FUNC(GOST_F_PKEY_GOST01CP_KEYGEN),	"PKEY_GOST01CP_KEYGEN"},
{ERR_FUNC(GOST_F_PKEY_GOST01_PARAMGEN),	"PKEY_GOST01_PARAMGEN"},
{ERR_FUNC(GOST_F_PKEY_GOST2001_DERIVE),	"PKEY_GOST2001_DERIVE"},
{ERR_FUNC(GOST_F_PKEY_GOST94CP_DECRYPT),	"PKEY_GOST94CP_DECRYPT"},
{ERR_FUNC(GOST_F_PKEY_GOST94CP_ENCRYPT),	"PKEY_GOST94CP_ENCRYPT"},
{ERR_FUNC(GOST_F_PKEY_GOST94CP_KEYGEN),	"PKEY_GOST94CP_KEYGEN"},
{ERR_FUNC(GOST_F_PKEY_GOST94_PARAMGEN),	"PKEY_GOST94_PARAMGEN"},
{ERR_FUNC(GOST_F_PKEY_GOST_CTRL),	"PKEY_GOST_CTRL"},
{ERR_FUNC(GOST_F_PKEY_GOST_CTRL01_STR),	"PKEY_GOST_CTRL01_STR"},
{ERR_FUNC(GOST_F_PKEY_GOST_CTRL94_STR),	"PKEY_GOST_CTRL94_STR"},
{ERR_FUNC(GOST_F_PKEY_GOST_MAC_CTRL),	"PKEY_GOST_MAC_CTRL"},
{ERR_FUNC(GOST_F_PKEY_GOST_MAC_CTRL_STR),	"PKEY_GOST_MAC_CTRL_STR"},
{ERR_FUNC(GOST_F_PKEY_GOST_MAC_KEYGEN),	"PKEY_GOST_MAC_KEYGEN"},
{ERR_FUNC(GOST_F_PRINT_GOST_01),	"PRINT_GOST_01"},
{ERR_FUNC(GOST_F_PRIV_DECODE_GOST),	"PRIV_DECODE_GOST"},
{ERR_FUNC(GOST_F_PUB_DECODE_GOST01),	"PUB_DECODE_GOST01"},
{ERR_FUNC(GOST_F_PUB_DECODE_GOST94),	"PUB_DECODE_GOST94"},
{ERR_FUNC(GOST_F_PUB_ENCODE_GOST01),	"PUB_ENCODE_GOST01"},
{ERR_FUNC(GOST_F_UNPACK_CC_SIGNATURE),	"UNPACK_CC_SIGNATURE"},
{ERR_FUNC(GOST_F_UNPACK_CP_SIGNATURE),	"UNPACK_CP_SIGNATURE"},
{0,NULL}
	};

static ERR_STRING_DATA GOST_str_reasons[]=
	{
{ERR_REASON(GOST_R_BAD_KEY_PARAMETERS_FORMAT),"bad key parameters format"},
{ERR_REASON(GOST_R_BAD_PKEY_PARAMETERS_FORMAT),"bad pkey parameters format"},
{ERR_REASON(GOST_R_CANNOT_PACK_EPHEMERAL_KEY),"cannot pack ephemeral key"},
{ERR_REASON(GOST_R_CTRL_CALL_FAILED)     ,"ctrl call failed"},
{ERR_REASON(GOST_R_ERROR_COMPUTING_SHARED_KEY),"error computing shared key"},
{ERR_REASON(GOST_R_ERROR_PACKING_KEY_TRANSPORT_INFO),"error packing key transport info"},
{ERR_REASON(GOST_R_ERROR_PARSING_KEY_TRANSPORT_INFO),"error parsing key transport info"},
{ERR_REASON(GOST_R_INCOMPATIBLE_ALGORITHMS),"incompatible algorithms"},
{ERR_REASON(GOST_R_INCOMPATIBLE_PEER_KEY),"incompatible peer key"},
{ERR_REASON(GOST_R_INVALID_CIPHER_PARAMS),"invalid cipher params"},
{ERR_REASON(GOST_R_INVALID_CIPHER_PARAM_OID),"invalid cipher param oid"},
{ERR_REASON(GOST_R_INVALID_DIGEST_TYPE)  ,"invalid digest type"},
{ERR_REASON(GOST_R_INVALID_GOST94_PARMSET),"invalid gost94 parmset"},
{ERR_REASON(GOST_R_INVALID_IV_LENGTH)    ,"invalid iv length"},
{ERR_REASON(GOST_R_INVALID_MAC_KEY_LENGTH),"invalid mac key length"},
{ERR_REASON(GOST_R_INVALID_PARAMSET)     ,"invalid paramset"},
{ERR_REASON(GOST_R_KEY_IS_NOT_INITALIZED),"key is not initalized"},
{ERR_REASON(GOST_R_KEY_IS_NOT_INITIALIZED),"key is not initialized"},
{ERR_REASON(GOST_R_KEY_PARAMETERS_MISSING),"key parameters missing"},
{ERR_REASON(GOST_R_MAC_KEY_NOT_SET)      ,"mac key not set"},
{ERR_REASON(GOST_R_MALLOC_FAILURE)       ,"malloc failure"},
{ERR_REASON(GOST_R_NO_MEMORY)            ,"no memory"},
{ERR_REASON(GOST_R_NO_PARAMETERS_SET)    ,"no parameters set"},
{ERR_REASON(GOST_R_NO_PEER_KEY)          ,"no peer key"},
{ERR_REASON(GOST_R_NO_PRIVATE_PART_OF_NON_EPHEMERAL_KEYPAIR),"no private part of non ephemeral keypair"},
{ERR_REASON(GOST_R_PUBLIC_KEY_UNDEFINED) ,"public key undefined"},
{ERR_REASON(GOST_R_RANDOM_GENERATOR_ERROR),"random generator error"},
{ERR_REASON(GOST_R_RANDOM_GENERATOR_FAILURE),"random generator failure"},
{ERR_REASON(GOST_R_RANDOM_NUMBER_GENERATOR_FAILED),"random number generator failed"},
{ERR_REASON(GOST_R_SIGNATURE_MISMATCH)   ,"signature mismatch"},
{ERR_REASON(GOST_R_SIGNATURE_PARTS_GREATER_THAN_Q),"signature parts greater than q"},
{ERR_REASON(GOST_R_UKM_NOT_SET)          ,"ukm not set"},
{ERR_REASON(GOST_R_UNSUPPORTED_CIPHER_CTL_COMMAND),"unsupported cipher ctl command"},
{ERR_REASON(GOST_R_UNSUPPORTED_PARAMETER_SET),"unsupported parameter set"},
{0,NULL}
	};

#endif

#ifdef GOST_LIB_NAME
static ERR_STRING_DATA GOST_lib_name[]=
        {
{0	,GOST_LIB_NAME},
{0,NULL}
	};
#endif


static int GOST_lib_error_code=0;
static int GOST_error_init=1;

void ERR_load_GOST_strings(void)
	{
	if (GOST_lib_error_code == 0)
		GOST_lib_error_code=ERR_get_next_error_library();

	if (GOST_error_init)
		{
		GOST_error_init=0;
#ifndef OPENSSL_NO_ERR
		ERR_load_strings(GOST_lib_error_code,GOST_str_functs);
		ERR_load_strings(GOST_lib_error_code,GOST_str_reasons);
#endif

#ifdef GOST_LIB_NAME
		GOST_lib_name->error = ERR_PACK(GOST_lib_error_code,0,0);
		ERR_load_strings(0,GOST_lib_name);
#endif
		}
	}

void ERR_unload_GOST_strings(void)
	{
	if (GOST_error_init == 0)
		{
#ifndef OPENSSL_NO_ERR
		ERR_unload_strings(GOST_lib_error_code,GOST_str_functs);
		ERR_unload_strings(GOST_lib_error_code,GOST_str_reasons);
#endif

#ifdef GOST_LIB_NAME
		ERR_unload_strings(0,GOST_lib_name);
#endif
		GOST_error_init=1;
		}
	}

void ERR_GOST_error(int function, int reason, char *file, int line)
	{
	if (GOST_lib_error_code == 0)
		GOST_lib_error_code=ERR_get_next_error_library();
	ERR_PUT_error(GOST_lib_error_code,function,reason,file,line);
	}
