#include <stdint.h>
#include "private.h"
#include "interface.h"
#include "config.h"


void main (){
ClearBit(DDRA_Reg,3);
SetBit(DDRC_Reg,3);
uint8_t state = 0;
while (1){
    state = ReadBit(PINA_Reg,3);
    if (state == 1){
        ClearBit(PORTC_Reg,3);
    }
    else{
        SetBit(PORTC_Reg,3);
    }
}
}