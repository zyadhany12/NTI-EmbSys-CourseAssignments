#include <stdio.h>

int main()
{
    int arr[5] = {0};
    int unsorted_max = 0;
    int sorted_max = 0;
    int temp = 0 ;

    for (int i = 0; i < 5; i++)
    {
        printf("Input the %d Number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Max Number without sorting
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > unsorted_max)
        {
            unsorted_max = arr[i];
        }
    }
    printf("the maximum number of the unsorted array is: %d \n", unsorted_max);

    //Sorting Algorithm Ascending
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    sorted_max = arr[4];
    printf("the maximum number of the sorted array is: %d", sorted_max);
    
}