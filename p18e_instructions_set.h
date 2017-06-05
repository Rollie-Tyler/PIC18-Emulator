#ifndef _P18E_INSTRUCTIONS_SET_H_
#define _P18E_INSTRUCTIONS_SET_H_

#include "global.h"

void p18e_is_addwf (void);
void p18e_is_addwfc(void);
void p18e_is_andwf (void);
void p18e_is_crlf  (void);

typedef void (*pf_instruction_t)(void);

#endif /* _P18E_INSTRUCTIONS_SET_H_ */

/* nothing below this line */
