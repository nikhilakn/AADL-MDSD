/*
 * This is a part of PolyORB-HI-C distribution, a minimal
 * middleware written for generated code from AADL models.
 * You should use it with the Ocarina toolsuite.
 *
 * For more informations, please visit http://www.openaadl.org
 *
 * Copyright (C) 2020 OpenAADL
 */

#ifndef GENERATED_ASN1SCC_1553_H
#define GENERATED_ASN1SCC_1553_H
/*
Code automatically generated by asn1scc tool
*/
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif


typedef asn1SccUint __po_hi_c_Node_Addr_T;


void __po_hi_c_Node_Addr_T_Initialize(__po_hi_c_Node_Addr_T* pVal);

#define ERR_NODE_ADDR_T		1  /**/
flag __po_hi_c_Node_Addr_T_IsConstraintValid(const __po_hi_c_Node_Addr_T* pVal, int* pErrCode);
typedef enum {
    __po_hi_c_mil1553a = 0,
    __po_hi_c_mil1553b = 1
} __po_hi_c_Standard_T;

// please use the following macros to avoid breaking code.
#define __po_hi_c_Standard_T_mil1553a __po_hi_c_mil1553a
#define __po_hi_c_Standard_T_mil1553b __po_hi_c_mil1553b

void __po_hi_c_Standard_T_Initialize(__po_hi_c_Standard_T* pVal);

#define ERR_STANDARD_T		8  /**/
flag __po_hi_c_Standard_T_IsConstraintValid(const __po_hi_c_Standard_T* pVal, int* pErrCode);
typedef enum {
    __po_hi_c_controller = 0,
    __po_hi_c_terminal = 1,
    __po_hi_c_monitor = 2
} __po_hi_c_Mode_T;

// please use the following macros to avoid breaking code.
#define __po_hi_c_Mode_T_controller __po_hi_c_controller
#define __po_hi_c_Mode_T_terminal __po_hi_c_terminal
#define __po_hi_c_Mode_T_monitor __po_hi_c_monitor

void __po_hi_c_Mode_T_Initialize(__po_hi_c_Mode_T* pVal);

#define ERR_MODE_T		15  /**/
flag __po_hi_c_Mode_T_IsConstraintValid(const __po_hi_c_Mode_T* pVal, int* pErrCode);
typedef enum {
    __po_hi_c_none = 0,
    __po_hi_c_bus_a = 1,
    __po_hi_c_bus_b = 2,
    __po_hi_c_both = 3
} __po_hi_c_Bus_T;

// please use the following macros to avoid breaking code.
#define __po_hi_c_Bus_T_none __po_hi_c_none
#define __po_hi_c_Bus_T_bus_a __po_hi_c_bus_a
#define __po_hi_c_Bus_T_bus_b __po_hi_c_bus_b
#define __po_hi_c_Bus_T_both __po_hi_c_both

void __po_hi_c_Bus_T_Initialize(__po_hi_c_Bus_T* pVal);

#define ERR_BUS_T		22  /**/
flag __po_hi_c_Bus_T_IsConstraintValid(const __po_hi_c_Bus_T* pVal, int* pErrCode);
/*-- __po_hi_c_mil_1553_conf_t --------------------------------------------*/
typedef char __po_hi_c_mil_1553_conf_t_devname[21];
typedef struct {
    __po_hi_c_mil_1553_conf_t_devname devname;
    __po_hi_c_Standard_T standard;
    __po_hi_c_Mode_T mode;
    __po_hi_c_Bus_T bus;
    __po_hi_c_Node_Addr_T termaddr;
    flag broadcast;
    flag rxblock;
    flag txblock;

    struct {
        unsigned int rxblock:1;
        unsigned int txblock:1;
    } exist;

} __po_hi_c_mil_1553_conf_t;

void __po_hi_c_mil_1553_conf_t_devname_Initialize(__po_hi_c_mil_1553_conf_t_devname val);
void __po_hi_c_mil_1553_conf_t_Initialize(__po_hi_c_mil_1553_conf_t* pVal);

#define ERR_MIL_1553_CONF_T		101  /**/
#define ERR_MIL_1553_CONF_T_DEVNAME		29  /**/
#define ERR_MIL_1553_CONF_T_STANDARD		36  /**/
#define ERR_MIL_1553_CONF_T_MODE		47  /**/
#define ERR_MIL_1553_CONF_T_BUS		58  /**/
#define ERR_MIL_1553_CONF_T_TERMADDR		69  /**/
#define ERR_MIL_1553_CONF_T_BROADCAST		80  /**/
#define ERR_MIL_1553_CONF_T_RXBLOCK		87  /**/
#define ERR_MIL_1553_CONF_T_TXBLOCK		94  /**/
flag __po_hi_c_mil_1553_conf_t_IsConstraintValid(const __po_hi_c_mil_1553_conf_t* pVal, int* pErrCode);

 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif
