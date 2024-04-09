#pragma once
/******************************************************************************/
/* File   : Compiler.hpp                                                      */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright � 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* git@github.com:RaajnaagHuliyapuradaMata/<module_name>.git                  */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgCompiler.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COMPILER_VENDOR_ID                                                    1u
#define COMPILER_MODULE_ID                                                  198u
#define COMPILER_AR_RELEASE_MAJOR_VERSION                                   (4u)
#define COMPILER_AR_RELEASE_MINOR_VERSION                                   (2u)
#define COMPILER_AR_RELEASE_REVISION_VERSION                                (2u)
#define COMPILER_SW_MAJOR_VERSION                                           (1u)
#define COMPILER_SW_MINOR_VERSION                                           (0u)
#define COMPILER_SW_PATCH_VERSION                                           (0u)
#define AUTOMATIC
#define TYPEDEF
#define NULL_PTR                                                      ((void*)0)
#define INLINE                                                          __inline
#define LOCAL                                                             static
#define LOCAL_INLINE                                               static inline
#define FUNC(rettype, memclass) rettype
#define FUNC_P2CONST(rettype, ptrclass, memclass)                 const rettype*
#define FUNC_P2VAR(rettype, ptrclass, memclass)                         rettype*
#define P2VAR(ptrtype, memclass, ptrclass)                              ptrtype*
#define P2CONST(ptrtype, memclass, ptrclass)                      const ptrtype*
#define CONSTP2VAR(ptrtype, memclass, ptrclass)                   ptrtype *const
#define CONSTP2CONST(ptrtype, memclass, ptrclass)           const ptrtype *const
#define P2FUNC(rettype, ptrclass, fctname)                    rettype (*fctname)
#define CONSTP2FUNC(rettype, ptrclass, fctname)         rettype (*const fctname)
#define CONST(type, memclass)                                         const type
#define VAR(vartype, memclass)                                           vartype

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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

