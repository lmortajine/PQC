#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "typedef.h"
#include "CryptoRAM.h"
#include "utils.h"

#include "matrix.h"
#include "gf2mn.h"

#include "gf2m.h"
#include "api.h"
#include "rollo_kem.h"
#include "test_vectors.h"




u1 Test_ROLLO(){
    memset(CryptoRAM,0x00,0x1000);
    _SecretKey SecretKey;
    SecretKey.pu4F = (pu4) CryptoRAM;
    SecretKey.pu4Sk_a = SecretKey.pu4F + PARAM_D  * PARAM_M_LEN_WORD;
    SecretKey.pu4Sk_b = SecretKey.pu4Sk_a + NM_WORDS_PAD;
    _PublicKey PublicKey;  
    PublicKey.pu4Pk = SecretKey.pu4Sk_b + NM_WORDS_PAD;
  

    /****************************Key generation ***********************************************/

    GenKey(&SecretKey, &PublicKey);


    /****************************Encapsulation ***********************************************/
    
    pu4 pu4Cipher= PublicKey.pu4Pk + NM_WORDS_PAD;

    pu1 ss_A = (pu1) (pu4Cipher + NM_WORDS_PAD);
    pu4 Workspace = (pu4)(ss_A + SHARED_SECRET_BYTES);


    Encaps(PublicKey, pu4Cipher,ss_A, Workspace);

    
    /****************************Decapsulation ***********************************************/

    pu1 ss_B = ss_A + SHARED_SECRET_BYTES;
    Workspace = (pu4)(ss_B + SHARED_SECRET_BYTES);

    if(Decaps(SecretKey, pu4Cipher, ss_B, Workspace))
    {
        return 1;
    }

    else if(memcmp(ss_B, ss_A, SHARED_SECRET_BYTES))
    {
        printf("\n secret1: ");
        for(int i = 0 ; i < SHARED_SECRET_BYTES ; i++){
            printf("%02x", ss_A[i]);
        } 

        printf("\n secret2: ");
        for(int i = 0 ; i < SHARED_SECRET_BYTES ; i++)
        {
            printf("%02x", ss_B[i]);
        } 
        printf(" \n"); 
        return 1;
    }
    
    return 0;
}

  

int main(void)
{

    for (int i = 0; i < 1000 ; ++i)
    {
        if(Test_ROLLO())
        {
            printf("Issue in the test number %d, the shared secret is not same after the Decapsulation \n", i);
            
        } 
        else
        {
            printf(" Test number %d ok \n", i);
        }
    }

 return 0;
}