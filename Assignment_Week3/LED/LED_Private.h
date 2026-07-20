#ifndef LED_PRIVATE_H
#define LED_PRIVATE_H

#define PORTA_Reg                    *((volatile uint8_t*)0x3B)
#define DDRA_Reg                     *((volatile uint8_t*)0x3A)
#define PINA_Reg                     *((volatile uint8_t*)0x39)
#define PORTB_Reg                    *((volatile uint8_t*)0x38)
#define DDRB_Reg                     *((volatile uint8_t*)0x37)
#define PINB_Reg                     *((volatile uint8_t*)0x36)
#define PORTC_Reg                    *((volatile uint8_t*)0x35)
#define DDRC_Reg                     *((volatile uint8_t*)0x34)
#define PINC_Reg                     *((volatile uint8_t*)0x33)
#define PORTD_Reg                    *((volatile uint8_t*)0x32)
#define DDRD_Reg                     *((volatile uint8_t*)0x31)
#define PIND_Reg                     *((volatile uint8_t*)0x30)          




#define SourceConnection 1
#define SinkConnection 2

#define GroupA 0
#define GroupB 1

#define PIN0 0
#define PIN1 1

#endif
















