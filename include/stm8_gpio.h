
#include "stm8s003_reg.h"

typedef enum {
    PORT_A = PA_ODR,
    PORT_B = PB_ODR,
    PORT_C = PB_,
    PORT_D,
    PORT_E,
    PORT_F
} port_t;

void toggle_port_a_pin(uint8_t pin);
void set_high_port_a_pin(uint8_t pin);
void set_low_port_a_pin(uint8_t pin);
void set
