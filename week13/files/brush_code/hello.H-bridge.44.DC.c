//
//
// hello.H-bridge.44.DC.c
//
// H-bridge DC motor hello-world
//
// Neil Gershenfeld
// 11/18/12
//
// (c) Massachusetts Institute of Technology 2012
// This work may be reproduced, modified, distributed,
// performed, and displayed for any purpose. Copyright is
// retained and must be preserved. The work is provided
// as is; no warranty is provided, and users accept all 
// liability.
//

#include <avr/io.h>
#include <util/delay.h>

#define output(directions,pin) (directions |= pin) // set port direction for output
#define set(port,pin) (port |= pin) // set port pin
#define clear(port,pin) (port &= (~pin)) // clear port pin
#define pin_test(pins,pin) (pins & pin) // test for port pin
#define bit_test(byte,bit) (byte & (1 << bit)) // test for bit set

#define on_delay() _delay_us(3) // PWM on time
#define fast_off_delay() _delay_us(1) // PWM fast off time
#define medium_off_delay() _delay_us(3) // PWM medium off time
#define slow_off_delay() _delay_us(5) // PWM slow off time
#define PWM_count 20000 // number of PWM cycles
#define cycle_count 5 // number of speed cycles

#define bridge_port PORTA // H-bridge port
#define bridge_direction DDRA // H-bridge direction
#define IN1 (1 << PA3) // IN1
#define IN2 (1 << PA2) // IN2

int main(void) {
   //
   // main
   //
   static uint16_t count;
   static uint8_t cycle;
   //
   // set clock divider to /1
   //
   CLKPR = (1 << CLKPCE);
   CLKPR = (0 << CLKPS3) | (0 << CLKPS2) | (0 << CLKPS1) | (0 << CLKPS0);
   //
   // initialize H-bridge pins
   //
   clear(bridge_port, IN1);
   output(bridge_direction, IN1);
   clear(bridge_port, IN2);
   output(bridge_direction, IN2);
   //
   // main loop
   //
   while (1) {
      for (cycle = 0; cycle < cycle_count; ++cycle) {
         //
         // turn forward slow
         //
         clear(bridge_port, IN1);
         set(bridge_port, IN2);
         for (count = 0; count < PWM_count; ++count) {
            set(bridge_port, IN2);
            on_delay();
            clear(bridge_port, IN2);
            slow_off_delay();
            }
         //
         // turn reverse slow
         //
         clear(bridge_port, IN2);
         set(bridge_port, IN1);
         for (count = 0; count < PWM_count; ++count) {
            set(bridge_port, IN1);
            on_delay();
            clear(bridge_port, IN1);
            slow_off_delay();
            }
         }
      for (cycle = 0; cycle < cycle_count; ++cycle) {
         //
         // turn forward medium
         //
         clear(bridge_port, IN1);
         set(bridge_port, IN2);
         for (count = 0; count < PWM_count; ++count) {
            set(bridge_port, IN2);
            on_delay();
            clear(bridge_port, IN2);
            medium_off_delay();
            }
         //
         // turn reverse medium
         //
         clear(bridge_port, IN2);
         set(bridge_port, IN1);
         for (count = 0; count < PWM_count; ++count) {
            set(bridge_port, IN1);
            on_delay();
            clear(bridge_port, IN1);
            medium_off_delay();
            }
         }
      for (cycle = 0; cycle < cycle_count; ++cycle) {
         //
         // turn forward fast
         //
         clear(bridge_port, IN1);
         set(bridge_port, IN2);
         for (count = 0; count < PWM_count; ++count) {
            set(bridge_port, IN2);
            on_delay();
            clear(bridge_port, IN2);
            fast_off_delay();
            }
         //
         // turn reverse fast
         //
         clear(bridge_port, IN2);
         set(bridge_port, IN1);
         for (count = 0; count < PWM_count; ++count) {
            set(bridge_port, IN1);
            on_delay();
            clear(bridge_port, IN1);
            fast_off_delay();
            }
         }
      }
   }
