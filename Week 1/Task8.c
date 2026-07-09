#include <stdio.h>
int main()
{
    char char_arr[7] = {0};
    char char_temp[7] = {0};
    int int_arr[7] = {0};
    int int_temp[7] = {0};
    char decision = '0';

    // Let the User decide whether we use Char or Integers
    printf("Will you use Characters(C/c) or Integers(I/i)? ");
    scanf(" %c", &decision);

    switch (decision)
    {
    case 'c':
    case 'C':
        printf("Write 7 characters: ");
        scanf("%7s", &char_arr);
        for (int i = 0; i < 7; i++)
        {
            char_temp[7 - i - 1] = char_arr[i];
        }
        printf("The reversed Characters are: ");
        for (int i = 0; i < 7; i++)
        {
            printf(" %c, ", char_temp[i]);
        }
        break;

    case 'i':
    case 'I':
        for (int i = 0; i < 7; i++)
        {
            printf("Input the %d Number: ", i + 1);
            scanf("%d", &int_arr[i]);
        }
        for (int i = 0; i < 7; i++)
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
