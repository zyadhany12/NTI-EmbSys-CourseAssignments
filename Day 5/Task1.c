#include <stdio.h>
#include <stdint.h>

int main(){
    volatile uint8_t arr[8] = {0};

    printf("Write 7 characters: "); //welcome
    scanf("%7s",(char*)arr);

    printf("You wrote: %s", (char*)arr);

}