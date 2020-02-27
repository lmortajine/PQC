#ifndef API_H
#define API_H

/* ROLLO-I-192*/

#define  PARAM_D 						7
#define  PARAM_R 						6
#define  PARAM_M 						89
#define  PARAM_M_LEN_WORD				3
#define	 PARAM_M_LEN_BYTES 				12
#define  PARAM_M_LEN_BYTES_PADDING 		12
#define  PARAM_N 						53
#define NB_COEFF_MODULO_GF2_N 			4
#define MODULO_GF2M_LEN       			3
#define SHARED_SECRET_BYTES 			64
#define NM_WORDS                      PARAM_N *PARAM_M_LEN_WORD
#define NM_WORDS_PAD                  (PARAM_N + 3)*PARAM_M_LEN_WORD         // with Karatsuba padding


#endif