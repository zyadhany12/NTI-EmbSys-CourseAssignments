#include <stdio.h>
#include <stdint.h>

int main()
{
    volatile  uint16_t arr[5] = {0};
    volatile uint16_t unsorted_max = 0;
    volatile uint16_t sorted_max = 0;
    uint16_t temp = 0 ;

    for (uint16_t i = 0; i < 5; i++)
    {
        printf("Input the %hd Number: ", i + 1);
        scanf("%hd", &arr[i]);
    }

    // Max Number without sorting
    for (uint16_t i = 0; i < 5; i++)
    {
        if (arr[i] > unsorted_max)
        {
            unsorted_max = arr[i];
        }
    }
    printf("the maximum number of the unsorted array is: %hd \n", unsorted_max);

    //Sorting Algorithm Ascending
    for (uint16_t i = 0; i < 5; i++)
    {
        for (uint16_t j = 0; j < 4; j++)
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
    printf("the maximum number of the sorted array is: %hd", sorted_max);
    
}