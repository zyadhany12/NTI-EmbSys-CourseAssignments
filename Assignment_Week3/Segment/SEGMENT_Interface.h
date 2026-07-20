#ifndef _SEGMENT_INTERFACE_H_
#define _SEGMENT_INTERFACE_H_
#include <stdint.h>
#define SetBit(Reg, BitNO) (Reg |= (1 << (BitNO)))
#define ClearBit(Reg, BitNO) (Reg &= ~(1 << (BitNO)))
#define ToggleBit(Reg, BitNO) (Reg ^= (1 << (BitNO)))
#define ReadBit(Reg, BitNO) (((Reg) >> (BitNO)) & 0x01)

void Segment_Init(uint8_t GroupName);
void DisplayNumber(uint8_t GroupName, uint8_t Number);
void DisplayRang(uint8_t GroupName,uint8_t Start , uint8_t End);

#endif