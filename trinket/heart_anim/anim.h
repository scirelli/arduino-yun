#ifndef ANIM_H
#define ANIM_H

#include <avr/pgmspace.h>

#define ANIM_REPS 17 

extern const uint8_t PROGMEM _step[];
extern const uint8_t PROGMEM _frame[];

int anim_steps(void);

#endif /* ifndef ANIM_H */
