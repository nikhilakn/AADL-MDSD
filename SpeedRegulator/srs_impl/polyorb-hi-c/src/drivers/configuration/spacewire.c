/*
 * This is a part of PolyORB-HI-C distribution, a minimal
 * middleware written for generated code from AADL models.
 * You should use it with the Ocarina toolsuite.
 *
 * For more informations, please visit http://www.openaadl.org
 *
 * Copyright (C) 2020 OpenAADL
 */

#if (defined (__PO_HI_NEED_DRIVER_SPACEWIRE_RASTA))\n
/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>


#include "spacewire.h"

const __po_hi_c_spacewire_conf_t leon_rasta_spw_sender = {
    .devname = "/dev/grspwrasta0",
    .nodeaddr = 11,
    .use_router = FALSE,
    .exist = {
        .corefreq = 0,
        .clockdiv = 0,
        .use_router = 0,
        .remove_prot_id = 0,
        .rxblock = 0,
        .txblock = 0
    }
};
const __po_hi_c_spacewire_conf_t leon_rasta_spw_receiver = {
    .devname = "/dev/grspwrasta0",
    .nodeaddr = 22,
    .use_router = FALSE,
    .exist = {
        .corefreq = 0,
        .clockdiv = 0,
        .use_router = 0,
        .remove_prot_id = 0,
        .rxblock = 0,
        .txblock = 0
    }
};


void __po_hi_c_Core_Frequence_T_Initialize(__po_hi_c_Core_Frequence_T* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag __po_hi_c_Core_Frequence_T_IsConstraintValid(const __po_hi_c_Core_Frequence_T* pVal, int* pErrCode)
{
    flag ret = TRUE;
	(void)pVal;
	
    ret = ((*(pVal)) <= 4294967295UL);
    *pErrCode = ret ? 0 :  ERR_CORE_FREQUENCE_T; 

	return ret;
}



void __po_hi_c_Node_Addr_T_Initialize(__po_hi_c_Node_Addr_T* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag __po_hi_c_Node_Addr_T_IsConstraintValid(const __po_hi_c_Node_Addr_T* pVal, int* pErrCode)
{
    flag ret = TRUE;
	(void)pVal;
	
    ret = ((*(pVal)) <= 255UL);
    *pErrCode = ret ? 0 :  ERR_NODE_ADDR_T; 

	return ret;
}



void __po_hi_c_Clock_Division_T_Initialize(__po_hi_c_Clock_Division_T* pVal)
{
	(void)pVal;


	(*(pVal)) = 0;
}

flag __po_hi_c_Clock_Division_T_IsConstraintValid(const __po_hi_c_Clock_Division_T* pVal, int* pErrCode)
{
    flag ret = TRUE;
	(void)pVal;
	
    ret = ((*(pVal)) <= 255UL);
    *pErrCode = ret ? 0 :  ERR_CLOCK_DIVISION_T; 

	return ret;
}



void __po_hi_c_spacewire_conf_t_devname_Initialize(__po_hi_c_spacewire_conf_t_devname val)
{
	(void)val;


	memset(val, 0x0, 21);

}
void __po_hi_c_spacewire_conf_t_Initialize(__po_hi_c_spacewire_conf_t* pVal)
{
	(void)pVal;



	/*set devname */
	__po_hi_c_spacewire_conf_t_devname_Initialize(pVal->devname);
	/*set nodeaddr */
	__po_hi_c_Node_Addr_T_Initialize((&(pVal->nodeaddr)));
	/*set corefreq */
	pVal->exist.corefreq = 1;
	__po_hi_c_Core_Frequence_T_Initialize((&(pVal->corefreq)));
	/*set clockdiv */
	pVal->exist.clockdiv = 1;
	__po_hi_c_Clock_Division_T_Initialize((&(pVal->clockdiv)));
	/*set use_router */
	pVal->exist.use_router = 1;
	pVal->use_router = FALSE;
	/*set remove_prot_id */
	pVal->exist.remove_prot_id = 1;
	pVal->remove_prot_id = FALSE;
	/*set rxblock */
	pVal->exist.rxblock = 1;
	pVal->rxblock = FALSE;
	/*set txblock */
	pVal->exist.txblock = 1;
	pVal->txblock = FALSE;
}

flag __po_hi_c_spacewire_conf_t_IsConstraintValid(const __po_hi_c_spacewire_conf_t* pVal, int* pErrCode)
{
    flag ret = TRUE;
	(void)pVal;
	
    ret = ((1 <= strlen(pVal->devname)) && (strlen(pVal->devname) <= 20));
    *pErrCode = ret ? 0 :  ERR_SPACEWIRE_CONF_T_DEVNAME; 
    if (ret) {
        ret = (pVal->nodeaddr <= 255UL);
        *pErrCode = ret ? 0 :  ERR_SPACEWIRE_CONF_T_NODEADDR; 
        if (ret) {
            if (pVal->exist.corefreq) {
            	ret = (pVal->corefreq <= 4294967295UL);
            	*pErrCode = ret ? 0 :  ERR_SPACEWIRE_CONF_T_COREFREQ; 
            }
            if (ret) {
                if (pVal->exist.clockdiv) {
                	ret = (pVal->clockdiv <= 255UL);
                	*pErrCode = ret ? 0 :  ERR_SPACEWIRE_CONF_T_CLOCKDIV; 
                }
            }
        }
    }

	return ret;
}

\n#endif
