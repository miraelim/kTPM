/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _MANUFACTURE_FP_H_
#define    _MANUFACTURE_FP_H_

//*** TPM_Manufacture()
// This function initializes the TPM values in preparation for the TPM's first
// use. This function will fail if previously called. The TPM can be re-manufactured
// by calling TPM_Teardown() first and then calling this function again.
// return type: int
//      0           success
//      1           manufacturing process previously performed
LIB_EXPORT int
TPM_Manufacture(
    int             firstTime       // IN: indicates if this is the first call from
                                    //     main()
    );

//*** TPM_TearDown()
// This function prepares the TPM for re-manufacture. It should not be implemented
// in anything other than a simulated TPM.
//
// In this implementation, all that is needs is to stop the cryptographic units
// and set a flag to indicate that the TPM can be re-manufactured. This should
// be all that is necessary to start the manufacturing process again.
// return type: int
//      0        success
//      1        TPM not previously manufactured
LIB_EXPORT int
TPM_TearDown(
    void
    );

//*** TpmEndSimulation()
// This function is called at the end of the simulation run. It is used to provoke
// printing of any statistics that might be needed.
LIB_EXPORT void
TpmEndSimulation(
    void
    );


#endif  // _MANUFACTURE_FP_H_