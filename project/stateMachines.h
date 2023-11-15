#ifndef stateMachine_included
#define stateMachine_included

void dim_green_state_advance();
void dim_red_state_advance();
void red_green_toggle_state_advance();
void siren_state_advance();
void binary_count_state_advance();
void update_blink_and_buzz(int frequency);
void tetris_state_advance();

#endif // included
