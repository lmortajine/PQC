#ifndef LAKE_H
#define LAKE_H

#include "api.h"

typedef struct _SecretKey
{
  pu4 pu4Sk_a;
  pu4 pu4Sk_b;
  pu4 pu4F;
} _SecretKey;

typedef struct _PublicKey
{
  pu4 pu4Pk;
  u1  u1Pk_degree;
} _PublicKey;


extern u1 GenKey( _SecretKey *SecretKey, _PublicKey *PublicKey, pu4 pu4Workspace);

extern pu4 Encaps(_PublicKey PublicKey, pu4 pu4Cipher, pu1 ss, pu4 pu4Workspace);

extern u2 Decaps(_SecretKey SecretKey, pu4 pu4Cipher, pu1 ss, pu4 pu4Workspace);

#endif