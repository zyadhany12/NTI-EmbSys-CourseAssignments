#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t arr[10] = {0};
    uint32_t temp = 0;
    volatile uint8_t type = '0';

    for (uint32_t i = 0; i < 10; i++)
    {
        printf("Input the %d Number: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("You want the numbers in Descending(D) or Ascending(A) order?");
    scanf(" %c", &type);

    // Switch Case to Select which Sort to be Used
    switch (type)
    {
    case 'A':
    case 'a':

        // Ascending Order Sorting
        for (uint32_t i = 0; i < 10; i++)
        {
            for (uint32_t j = 0; j < 9; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        printf("The numbers in Ascending Order are: ");
        for (uint32_t i = 0; i < 10; i++)
        {
            printf("%d, ", arr[i]);
        }
        break;
    case 'D':
    case 'd':

        // Descending Order Sorting
        for (uint32_t i = 0; i < 10; i++)
        {
            for (uint32_t j = 1; j < 10; j++)
            {
                if (arr[j] > arr[j - 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
        printf("The numbers in Descending Order are: ");
        for (uint32_t i = 0; i < 10; i++)
        {
            printf("%d, ", arr[i]);
        }
        break;

    default:
        printf("Invalid Input!");
        break;
    }
}