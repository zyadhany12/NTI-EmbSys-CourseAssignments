#include <stdio.h>
#include <stdint.h>

int main(){
    volatile uint8_t arr[8] = {0};

    printf("Write 7 characters: ");
    scanf("%7s",(char*)arr);

    printf("The Ascii for the Characters are: ");
    for(uint32_t i = 0; i < 7; i++){
        printf("%d, ", arr[i]);
    }
}