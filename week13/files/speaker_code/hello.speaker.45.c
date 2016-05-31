//
// hello.speaker.45.c
//
// speaker PWM hello-world
//    square wave, pseudo-random frequency
//
// Neil Gershenfeld
// 11/14/10
//
// (c) Massachusetts Institute of Technology 2010
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

#define cycle_delay() _delay_us(2) // cycle delay
#define current 150 // PWM current
#define off 255 // PWM off

#define MOSFET_pin (1 << PB1)
#define MOSFET_port PORTB
#define MOSFET_direction DDRB

int main(void) {
   //
   // main
   //
   static uint16_t cycle,cycles,delay,bit,lfsr;
   //
   // set clock divider to /1
   //
   CLKPR = (1 << CLKPCE);
   CLKPR = (0 << CLKPS3) | (0 << CLKPS2) | (0 << CLKPS1) | (0 << CLKPS0);
   //
   //
   //
   TCCR0A = ((1 << COM0B0) | (1 << COM0B1) | (1 << WGM01) | (1 << WGM00)); // set OC0B on compare match and set fast PWM mode, 0xFF TOP
   TCCR0B = (1 << CS00); // set timer 0 prescalar to 1
   //
   // initialize MOSFET pin
   //
   clear(MOSFET_port, MOSFET_pin);
   output(MOSFET_direction, MOSFET_pin);
   //
   // initialize LFSR
   //
   lfsr = 1;
   //
   // main loop
   //
   while (1) {
      //
      // update 11 bit LFSR
      //
      bit  = ((lfsr >> 0) ^ (lfsr >> 9)) & 1;
      lfsr =  (lfsr >> 1) | (bit << 10);
      //
      // loop over cycles
      //
      cycles = (1 << 15) / lfsr;
      for (cycle = 0; cycle < cycles; ++cycle) {
         //
         // set PWM current on and delay
         //
         OCR0B = current;
         for (delay = 0; delay < lfsr; ++delay)
            cycle_delay();
         //
         // set PWM current off and delay
         //
         OCR0B = off;
         for (delay = 0; delay < lfsr; ++delay)
            cycle_delay();
         }
      }
   }
