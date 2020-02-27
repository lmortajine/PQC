#ifndef MATRIX_
#define MATRIX_


#include "typedef.h"

extern u1 SwapLines(pu4 pu4A, pu4 pu4B, u1 u1Length);
extern u1 Find_pivot(pu4 pu4Matrix, u1 nu1NbRows, u1 nu1Line, u1 u1Pivot, u1 u1ElementLength);
extern u1 Echelon_matrix(pu4 pu4Matrix, u1 u1NbRows, u1 u1NbCols,u1 u1ElementLength, pu4 pu4Workspace);
extern u1 Reduced_Echelon_matrix(pu4 pu4Matrix, u1 u1NbRows, u1 u1NbCols,u1 u1ElementLength, pu4 pu4Workspace);
extern u2 Degree_GF2m(pu4 pu4X, u1 u1Len);



#endif