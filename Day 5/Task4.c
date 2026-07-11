#include <stdio.h>
#include <stdint.h>

int main() {
    volatile uint64_t arr[7] = {0};
    volatile uint64_t target_num = 0;
    volatile uint64_t repeat = 0;

    for (uint64_t i = 0; i < 7; i++)
    {
        printf("Input the %lld Number: ", i + 1);
        scanf("%lld", &arr[i]);
    }   
    printf("What Number are you Searching for?  ");
    scanf("%lld", &target_num);

    for(uint64_t i = 0; i < 7; i++){
        if(arr[i] == target_num){
            repeat++;
        }
    }
    printf("The number exists %lld time/s.", repeat);
}