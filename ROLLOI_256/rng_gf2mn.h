#ifndef RNG_H
#define RNG_H
#include "typedef.h"

extern u1 Create_support_using_rng(pu4 pu4Support, u1 u1Rank);
extern u1 Create_gf2mn_using_support(pu4 pu4Element, pu4 pu4Support, u1 u1Rank);
extern u1 Random_GF2_m(pu1 v, u1 size);



#endif