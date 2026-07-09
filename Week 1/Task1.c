#include <stdio.h>

int main(){
    char arr[7] = {0};

    printf("Write 7 characters: ");
    scanf("%7s",&arr);

    printf("You wrote: %s", &arr);

}
