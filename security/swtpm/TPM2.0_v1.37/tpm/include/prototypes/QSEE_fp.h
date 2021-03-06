/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _QSEE_FP_H_
#define    _QSEE_FP_H_

#if defined CC_VENDOR_QC_Certify && TPM_CC_VENDOR_QC_Certify == YES
uint8_t *
SetToString(
    BYTE *to,
    const char
    *string,
    uint32_t toSize);

//*** macchiato_sign_service_data()
int32_t
macchiato_sign_service_data(
    buffer_t            serviceData,
    buffer_t            signedServiceData,
    uint32_t            *pu32SignedServiceDataLength
    );
#endif


#endif  // _QSEE_FP_H_
