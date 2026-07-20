#include <stdint.h>
#include "LED_Interface.h"
#include "LED_Private.h" 
#include "LED_Config.h"


void Led_Init(uint8_t GroupName, uint8_t PinNumber)
{
    if(GroupName == GroupA)
    {
        SetBit(DDRA_Reg, PinNumber); 
    }
    else if(GroupName == GroupB)
    {
        SetBit(DDRB_Reg, PinNumber); 
    }
}


void Led_on(uint8_t GroupName, uint8_t PinNumber, uint8_t ConnectionType)
{
    if(ConnectionType == SourceConnection)
    {
        if(GroupName == GroupA)       SetBit(PORTA_Reg, PinNumber);
        else if(GroupName == GroupB)  SetBit(PORTB_Reg, PinNumber);
    }
    else if(ConnectionType == SinkConnection)
    {
        if(GroupName == GroupA)       ClearBit(PORTA_Reg, PinNumber);
        else if(GroupName == GroupB)  ClearBit(PORTB_Reg, PinNumber);
    }
}


void Led_off(uint8_t GroupName, uint8_t PinNumber, uint8_t ConnectionType)
{
    if(ConnectionType == SourceConnection)
    {
        if(GroupName == GroupA)       ClearBit(PORTA_Reg, PinNumber);
        else if(GroupName == GroupB)  ClearBit(PORTB_Reg, PinNumber);
    }
    else if(ConnectionType == SinkConnection)
    {
        if(GroupName == GroupA)       SetBit(PORTA_Reg, PinNumber);
        else if(GroupName == GroupB)  SetBit(PORTB_Reg, PinNumber);
    }
}