#pragma once
/******************************************************************************/
/* File   : Compiler_Cfg.h                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/*******************************************************************************
Compiler configuration for
--------------------------------------------------------------------------------
Vendor   : Green Hills Software
Compiler : MULTI
Version  : 2015.1.7
*******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define AUTOSAR_COMSTACKDATA
#define MSR_REGSPACE                                                    REGSPACE
#define REGSPACE
#define _STATIC_                                                          STATIC

/* Move to respective CompilerCfg_<Module_Name>.h */
#define _CDD_CODE
#define _CDD_APPL_DATA

#define EcuabFee_PUBLIC_CODE
#define EcuabFee_PRIVATE_CODE
#define EcuabFee_APPL_DATA
#define EcuabFee_FAST_DATA
#define EcuabFee_PRIVATE_CONST
#define EcuabFee_PUBLIC_CONST
#define EcuabFee_NVM_CODE

#define EcuabFee_CODE EcuabFee_PUBLIC_CODE
#define MEMIF_CODE
#define MEMIF_PRIVATE_CODE
#define MEMIF_CONST
#define MEMIF_APPL_DATA

#define NVM_APPL_DATA
#define NVM_APPL_CODE
#define NVM_APPL_CONST
#define NVM_CRC_APPL_DATA
#define NVM_CONFIG_DATA
#define NVM_CONFIG_CONST
#define NVM_FAST_DATA
#define NVM_PRIVATE_CODE
#define NVM_PRIVATE_CONST
#define NVM_PRIVATE_DATA
#define NVM_PUBLIC_CODE
#define NVM_PUBLIC_CONST
#define NVM_CODE NVM_PUBLIC_CODE

#define VSTDLIB_CODE
#define VSTDLIB_VAR_FAR
#define VSTDLIB_APPL_VAR

#define FBLBMHDR_CONST
#define FBLBMHDR_CODE

#include "CompilerCfg_SwcServiceOs.hpp"

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#define UNUSED(x)                                                      ((void)x)/*(x=x)*/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

