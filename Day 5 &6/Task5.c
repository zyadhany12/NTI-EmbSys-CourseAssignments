#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent);

int sumDigits(int n);


int main()
{
    int n = 0;
    int base = 0;
    int exponent = 0;
    int options = 0;
    do
    {
        system("cls");
        printf("Choose the corresponding number for the operation you want:\n");
        printf("1- Raise a number to an exponent.\n");
        printf("2- Get the sum of digits for a number.\n");
        printf("3- Exit\n");
        scanf("%d", &options);

        switch (options)
        {
        case 1:
            printf("write the number then the exponent (Click Enter after every each one): \n");
            scanf("%d%d", &base, &exponent);
            printf("The the result is: %d\n", power(base, exponent));
            break;
        case 2:
            printf("write the number to get the sum of digits for: \n");
            scanf("%d", &n);
            printf("The the result is: %d\n", sumDigits(n));
            break;
        case 3:
            printf("Thank you for using the program.\n");
            break;
        default:
        printf("Invalid option.\n");
            break;
        }
        printf("Sure want to end? if not click any number but 3. \n");
        scanf("%d", &options);
    } while (options != 3);
}


int sumDigits(int n)
{ // %10 -> 4  .... (%100)/10 -> 2 .... /100 -> 1
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sumDigits(n / 10);
    }
}


int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return base;
    }
    else
    {
        return (base * power(base, exponent - 1));
    }
}