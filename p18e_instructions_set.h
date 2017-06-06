#ifndef _P18E_INSTRUCTIONS_SET_H_
#define _P18E_INSTRUCTIONS_SET_H_

#include "global.h"

void p18e_is_addwf (void);
void p18e_is_addwfc(void);
void p18e_is_andwf (void);
void p18e_is_crlf  (void);
void p18e_is_comf  (void);
void p18e_is_cpfseq(void);
void p18e_is_cpfsgt(void);
void p18e_is_cpfslt(void);
void p18e_is_decf  (void);
void p18e_is_decfsz(void);
void p18e_is_dcfsnz(void);
void p18e_is_incf  (void);
void p18e_is_incfsz(void);
void p18e_is_infsnz(void);
void p18e_is_iorwf (void);
void p18e_is_movf  (void);
void p18e_is_movff (void);

void p18e_is_bcf   (void);


typedef void (*pf_instruction_t)(void);

typedef struct
{
  unsigned char instruction;
  unsigned char f;
  boolen        d;
  boolen        a;
  unsigned char b;
  unsigned char n;
  unsigned char k;
} Instruction_Type;

#endif /* _P18E_INSTRUCTIONS_SET_H_ */

/* nothing below this line */
