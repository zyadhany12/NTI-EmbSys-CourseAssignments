#include <stdio.h>

int main(){
    char arr[7] = {0};
    char max = '0';

    printf("Write 7 characters: ");
    scanf("%7s",&arr);

    for(int i = 0; i < 7; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The Biggest Character is: %c", max);
}
