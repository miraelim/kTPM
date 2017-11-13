/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _ALGORITHMCAP_FP_H_
#define    _ALGORITHMCAP_FP_H_

//** AlgorithmCapGetImplemented()
// This function is used by TPM2_GetCapability() to return a list of the
// implemented algorithms.
// return type: TPMI_YES_NO
//  YES        more algorithms to report
//  NO         no more algorithms to report
TPMI_YES_NO
AlgorithmCapGetImplemented(
    TPM_ALG_ID                   algID,     // IN: the starting algorithm ID
    UINT32                       count,     // IN: count of returned algorithms
    TPML_ALG_PROPERTY           *algList    // OUT: algorithm list
    );

LIB_EXPORT
void
AlgorithmGetImplementedVector(
    ALGORITHM_VECTOR    *implemented    // OUT: the implemented bits are SET
    );


#endif  // _ALGORITHMCAP_FP_H_