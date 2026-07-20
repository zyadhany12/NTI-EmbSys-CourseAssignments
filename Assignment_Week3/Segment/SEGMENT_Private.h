#ifndef _SEGMENT_PRIVATE_H_
#define _SEGMENT_PRIVATE_H_
#define PORTA_Reg           *((volatile uint8_t*)0x3B)
#define DDRA_Reg            *((volatile uint8_t*)0x3A)
#define PINA_Reg            *((volatile uint8_t*)0x39)
#define PORTB_Reg           *((volatile uint8_t*)0x38)
#define DDRB_Reg            *((volatile uint8_t*)0x37)
#define PINB_Reg            *((volatile uint8_t*)0x36)
#define PORTC_Reg           *((volatile uint8_t*)0x35)
#define DDRC_Reg            *((volatile uint8_t*)0x34)
#define PINC_Reg            *((volatile uint8_t*)0x33)
#define PORTD_Reg           *((volatile uint8_t*)0x32)
#define DDRD_Reg            *((volatile uint8_t*)0x31)
#define PIND_Reg            *((volatile uint8_t*)0x30)

#define Cathod_Zero 0x3F
#define Cathod_one 0x06
#define Cathod_two 0x4C
#define Cathod_three 0x4F
#define Cathod_four 0x66
#define Cathod_five 0x6D
#define Cathod_six 0x7D
#define Cathod_seven 0x07
#define Cathod_eight 0x7F
#define Cathod_nine 0x6F

#endif