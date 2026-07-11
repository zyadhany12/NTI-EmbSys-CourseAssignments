#include <stdio.h>
#include <stdint.h>


#define SIZE 8

int main()
{
    volatile uint8_t char_arr[SIZE] = {0};
    volatile uint8_t char_temp[SIZE] = {0};
    volatile uint32_t int_arr[SIZE] = {0};
    uint32_t int_temp[SIZE] = {0};
    volatile uint8_t decision = '0';

    // Let the User decide whether we use Char or Integers
    printf("Will you use Characters(C/c) or Integers(I/i)? ");
    scanf(" %c", &decision);

    switch (decision)
    {
    case 'c':
    case 'C':
        printf("Write 7 characters: ");
        scanf("%7s", (char*)char_arr);
        for (int i = 0; i < SIZE - 1; i++)
        {
            char_temp[7 - i - 1] = char_arr[i];
        }
        printf("The reversed Characters are: ");
        for (int i = 0; i < SIZE - 1; i++)
        {
            printf(" %c, ", char_temp[i]);
        }
        break;

    case 'i':
    case 'I':
        for (int i = 0; i < SIZE - 1; i++)
        {
            printf("Input the %d Number: ", i + 1);
            scanf("%d", &int_arr[i]);
        }
        for (int i = 0; i < SIZE - 1 ; i++)
        {
            int_temp[7 - i - 1] = int_arr[i];
        }
        printf("The reversed Numbers List: ");
        for (int i = 0; i < 7; i++)
        {
            printf("%d, ", int_temp[i]);
        }
        break;

    default:
        printf("Invalid Input.");
        break;
    }
}