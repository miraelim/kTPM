/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)

    Created by TpmStructures Version 2.7 Sept 13, 2016
    This file created on Sep 22, 2016, 05:27:02PM 

*/

#ifdef TPM_CC_TestParms // Command must be defined
#ifndef _TestParms_H
#define _TestParms_H

// Input structure definition
typedef struct {
    TPMT_PUBLIC_PARMS    parameters;
} TestParms_In;

// Response code modifiers
#define    RC_TestParms_parameters    (TPM_RC_P + TPM_RC_1)

// Function prototype
TPM_RC
TPM2_TestParms(
    TestParms_In *in
);


#endif  // _TestParms_H
#endif  // TPM_CC_TestParms
