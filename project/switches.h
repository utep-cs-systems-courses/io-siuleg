#ifndef switches_included
#define switches_included


#define SW1 BIT0
#define SW2 BIT1
#define SW3 BIT2
#define SW4 BIT3


#define SWITCHES (SW1 | SW2 | SW3 | SW4) /* 4 switches on the board */


void switch_init();
static char switch_update_interrupt_sense();
void switch_interrupt_handler();


extern char switch_state_down, switch_state_changed; /* effectively boolean */
extern char button_sequence_state;
extern int secondCount;
#endif // included
