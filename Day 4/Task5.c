#include <stdio.h>
#include <stdint.h>

int main(){
    volatile uint8_t arr[8] = {0};
    volatile uint8_t target_char = '0';
    uint32_t repeat = 0;

    printf("Write 7 characters: ");
    scanf(" %7s",(char*)arr);

    printf("What Character are you Searching for?  ");
    scanf(" %c",&target_char);

    for(uint32_t i = 0; i < 7 ; i++){
        if(arr[i] == target_char){
            repeat++;
        }
    }
    printf("Character exists %d time/s", repeat);
}