#include <stdio.h>
#include <stdint.h>

int main(){
   volatile uint8_t arr[8] = {0};
   uint8_t max = '0';

    printf("Write 7 characters: ");
    scanf("%7s",(char*)arr);

    for(uint32_t i = 0; i < 7; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The Biggest Character is: %c", max);
}
