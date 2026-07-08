#include <stdio.h>

int main(){
    char arr[7] = {0};

    printf("Write 7 characters: ");
    scanf("%s",&arr);

    printf("The Ascii for the Characters are: ");
    for(int i = 0; i < 7; i++){
        printf("%d, ", arr[i]);
    }
}