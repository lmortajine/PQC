#ifndef UTILS_H
#define UTILS_H

#include "typedef.h"

extern u2 Shift_32bits_Words_Left(pu4 pu4X, pu4 pu4R, u1 u1Len, u1 u1Shift_Number);
extern u2 Shift_32bits_5Words_Left_4bits(pu4 pu4X);
extern u2 Is_Unit(pu4 pu4X, u1 u1Len);
extern u2 Is_Zero(pu4 pu4X, u1 u1Len);
extern u2 Degree_GF2m(pu4 pu4X, u1 u1Len);
extern void ConstToRamMemCpy(pu4 pu4Dest,pu4 pu4Src,u2 u2Length);
extern u1 word_to_byte(pu1 v_destination, pu4 v_initial, u1 len_v, u1 nb_coeff);
extern u1 byte_to_word(pu4 v_destination, pu1 v_initial, u1 nb_coeff);
#endif