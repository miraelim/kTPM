/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _TPMFAIL_FP_H_
#define    _TPMFAIL_FP_H_

#ifdef SIMULATION
//*** SetForceFailureMode()
// This function is called by the simulator to enable failure mode testing.
LIB_EXPORT void
SetForceFailureMode(
    void
    );
#endif

//*** TpmFail()
// This function is called by TPM.lib when a failure occurs. It will set up the
// failure values to be returned on TPM2_GetTestResult().
NORETURN void
TpmFail(
    const char      *function,
    int              line,
    int              code
    );

//** TpmFailureMode(
// This function is called by the interface code when the platform is in failure
// mode.
void
TpmFailureMode(
    unsigned int     inRequestSize,     // IN: command buffer size
    unsigned char   *inRequest,         // IN: command buffer
    unsigned int    *outResponseSize,   // OUT: response buffer size
    unsigned char   **outResponse       // OUT: response buffer
    );

//** UnmarshalFail()
// This is a stub that is used to catch an attempt to unmarshal an entry
// that is not defined. Don't ever expect this to be called but...
void
UnmarshalFail(
    void            *type,
    BYTE            **buffer,
    INT32           *size
    );


#endif  // _TPMFAIL_FP_H_