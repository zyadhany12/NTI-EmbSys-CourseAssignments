#include <stdio.h>

int main() {
    int arr[7] = {0};
    int target_num = 0;
    int repeat = 0;

    for (int i = 0; i < 7; i++)
    {
        printf("Input the %d Number: ", i + 1);
        scanf("%d", &arr[i]);
    }   
    printf("What Number are you Searching for?  ");
    scanf("%d", &target_num);

    for(int i = 0; i < 7; i++){
        if(arr[i] == target_num){
            repeat++;
        }
    }
    printf("The number exists %d time/s.", repeat);
}