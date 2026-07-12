#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(){
    int arr[5] = {0};
    printf("Write the 5 numbers to be ordered: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++){
        for(int j = i; j < 5 ; j++){
            if(arr[j] < arr[i]){
                swap(&arr[j],&arr[i]);
            }
        }
    }
    printf("The ordered Numbers are: ");
        for(int i = 0; i < 5; i++){
        printf("%d", arr[i]);
    }

}


void swap(int *a, int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}