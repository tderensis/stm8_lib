
#include "stm8s003_reg.h"

#include <stdint.h>

struct input_pin_config
{
    bool pull_up_enable;
    bool interrupt_enable;
};

struct output_pin_config
{
    bool open_drain_enable;
    bool fast_mode_enable;
};

inline void set_port_a(uint8_t value)
{
    PA_ODR = value;
}

inline void toggle_port_a_pin(uint8_t pin)
{
    set_port_a((*(uart16_t *) PA_ODR) ^ ~(1 << pin));
}

inline void set_high_port_a_pin(uint8_t pin)
{
    set_port_a((*(uint16_t *) PA_ODR) | (1 << pin));
}

inline void set_low_port_a_pin(uint8_t pin)
{
    set_port_a((*(uart16_t *) PA_ODR) & ~(1 << pin));
}

inline void read_port_a(uint8_t * value)
{
    &value = (uint16_t *) PA_IDR;
}

inline bool read_port_a_pin(uint8_t pin)
{
    uint8_t value;
    read_port_a_pin(value);
    return value >> pin;
}

inline void configure_port_a_input_pin(struct input_pin_config * config);
inline void configure_port_a_output_pin(struct output_pin_config * config);
