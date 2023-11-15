#include <msp430.h>
#include "buzzer.h"
#include "led.h"
#include "switches.h"
#include "stateMachines.h"

char button_sequence_state = 0;

void
__interrupt_vec(WDT_VECTOR) WDT(){ /* 250 interrupts/sec */
  static int secondCount = 0;
  secondCount ++;
   
  switch(button_sequence_state) {
  case 0:
    if(secondCount >= 25) {
      tetris_state_advance();
      secondCount = 0;
    }
    break;
  case 1:
    buzzer_set_period(0);
    dim_green_state_advance();
    dim_red_state_advance();
    break;
  case 2:
    if(secondCount >= 62) {
      siren_state_advance();
      secondCount = 0;
    }
    break;
  case 3:
    break;
   }
}
