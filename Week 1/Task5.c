#include <stdio.h>

int main(){
    char arr[7] = {0};
    char target_char = '0';
    int repeat = 0;

    printf("Write 7 characters: ");
    scanf(" %7s",&arr);

    printf("What Character are you Searching for?  ");
    scanf(" %c",&target_char);

    for(int i = 0; i < 7 ; i++){
        if(arr[i] == target_char){
            repeat++;
        }
    }
    printf("Character exists %d time/s", repeat);
}
