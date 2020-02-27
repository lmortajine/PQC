#ifndef GF2M_H
#define GF2M_H
#include "typedef.h"

extern u2 Add_GF2m(pu4 pu4X, pu4 pu4Y, pu4 pu4R, u2 u1Len);
extern u2 Modular_Reduction_GF2m(pu4 pu4X, pu4 pu4R);
extern u2 Mupliply_GF2m_PreCompute(pu4 pu4X, pu4 pu4Storage, u1 u1Len);
extern u2 Mupliply_GF2m_With_PreCompute(pu4 pu4X, pu4 pu4PreCompute, pu4 pu4R, u1 u1Len, u1 u1Degree);
extern u2 Modular_inverse_GF2m(pu4 pu4X, pu4 pu4Modulo, pu4 pu4R, pu4 pu4Workspace, u1 u1Len);

#endif