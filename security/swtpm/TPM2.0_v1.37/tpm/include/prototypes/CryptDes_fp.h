/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _CRYPTDES_FP_H_
#define    _CRYPTDES_FP_H_

#ifdef TPM_ALG_TDES
//*** CryptSetOddByteParity()
// This function sets the per byte parity of a 64-bit value. The least-significant
// bit is of each byte is replaced with the odd parity of the other 7 bits in the
// byte. With odd parity, no byte will ever be 0x00.
UINT64
CryptSetOddByteParity(
    UINT64          k
    );

//*** CryptDesValidateKey()
// Function to check to see if the input key is a valid DES key where the definition
// of valid is that none of the elements are on the list of weak, semi-weak, or
// possibly weak keys; and that for two keys, K1!=K2, and for three keys that
// K1!=K2 and K2!=K3.
BOOL
CryptDesValidateKey(
    TPM2B_SYM_KEY       *desKey     // IN: key to validate
    );

//*** CryptGenerateKeyDes()
// This function is used to create a DES key of the appropriate size. The key will
// have odd parity in the bytes.
TPM_RC
CryptGenerateKeyDes(
    TPMT_PUBLIC             *publicArea,        // IN/OUT: The public area template
                                                //     for the new key.
    TPMT_SENSITIVE          *sensitive,         // OUT: sensitive area
    RAND_STATE              *rand               // IN: the "entropy" source for
    );
#endif


#endif  // _CRYPTDES_FP_H_
