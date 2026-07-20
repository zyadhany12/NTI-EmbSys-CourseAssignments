#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#include <stdint.h>


#define SetBit(Reg, BitNO) (Reg |= (1 << (BitNO)))
#define ClearBit(Reg, BitNO) (Reg &= ~(1 << (BitNO)))
#define ToggleBit(Reg, BitNO) (Reg ^= (1 << (BitNO)))
#define ReadBit(Reg, BitNO) (((Reg) >> (BitNO)) & 0x01)

void Led_Init(uint8_t GroupName, uint8_t PinNumber);

void Led_on(uint8_t GroupName,
            uint8_t PinNumber,
            uint8_t ConnectionType);

void Led_off(uint8_t GroupName,
             uint8_t PinNumber,
             uint8_t ConnectionType);

#endif