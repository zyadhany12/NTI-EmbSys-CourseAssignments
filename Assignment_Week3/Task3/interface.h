#define SetBit(Reg, BitNO) (Reg |= (1 << (BitNO)))
#define ClearBit(Reg, BitNO) (Reg &= ~(1 << (BitNO)))
#define ToggleBit(Reg, BitNO) (Reg ^= (1 << (BitNO)))
#define ReadBit(Reg, BitNO) (((Reg) >> (BitNO)) & 0x01)