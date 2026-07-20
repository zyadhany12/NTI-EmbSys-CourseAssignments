#include "SEGMENT_Config.h"
#include "SEGMENT_Interface.h"
#include "SEGMENT_Private.h"
#include <stdint.h>
#include <util/delay.h>


uint8_t numbers_arr[10] = {
    Cathod_Zero,
    Cathod_one,
    Cathod_two,
    Cathod_three,
    Cathod_four,
    Cathod_five,
    Cathod_six,
    Cathod_seven,
    Cathod_eight,
    Cathod_nine};

void Segment_Init(uint8_t GroupName)
{
    if (GroupName == 0)
    {
        DDRA_Reg = 0xFF;
        PORTA_Reg = 0x00;
    }
    else if (GroupName == 1)
    {
        DDRB_Reg = 0xFF;
        PORTB_Reg = 0x00;
    }
    else if (GroupName == 2)
    {
        DDRC_Reg = 0xFF;
        PORTC_Reg = 0x00;
    }
    else if (GroupName == 3)
    {
        DDRD_Reg = 0xFF;
        PORTD_Reg = 0x00;
    }
}

void DisplayNumber(uint8_t GroupName, uint8_t Number) //Call it two times to print two digits
{
    Segment_Init(GroupName);
    /* if (Number > 9)
    {
        return;
    }
    else
    {
        if (GroupName == 0)
        {
            PORTA_Reg = numbers_arr[Number];
        }
        else if (GroupName == 1)
        {
            PORTB_Reg = numbers_arr[Number];
        }
        else if (GroupName == 2)
        {
            PORTC_Reg = numbers_arr[Number];
        }
        else if (GroupName == 3)
        {
            PORTD_Reg = numbers_arr[Number];
        }
    } */
   //OR it can be hardcoded:    //PORTA is the left screen / PORTC is the right screen
   PORTA_Reg = Number/10;
   PORTC_Reg = Number%10;
}

void DisplayRang(uint8_t GroupName, uint8_t Start, uint8_t End) //displays a range from 0 -> 9 can be called twice in loops/condtions for 0 -> 99  
{
    if (End < Start || Start > 9)
    {
        return ;
    }
    else
    {
        for (uint8_t i = Start; i <= End; i++)
        {
            if (GroupName == 0)
            {
                PORTA_Reg = numbers_arr[i];
            }
            else if (GroupName == 1)
            {
                PORTB_Reg = numbers_arr[i];
            }
            else if (GroupName == 2)
            {
                PORTC_Reg = numbers_arr[i];
            }
            else if (GroupName == 3)
            {
                PORTD_Reg = numbers_arr[i];
            }
            _delay_ms(1000);
        }
    }
}