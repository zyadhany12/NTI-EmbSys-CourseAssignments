#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void processTransaction(float *balance, int type);

int main()
{
    int type = 0;
    float balance = 3500;

    do
    {
        system("cls");
        printf("Type the number of the corresponding transaction from the list below: \n1- Deposit\n2- Withdraw\n3- Check Balance\n4- Exit\n");
        scanf("%d", &type);
        processTransaction(&balance, type);
        printf("if you want to do more Transaction press anything but 4: ");
        scanf("%d", &type);
    } while (type != 4);
}

void processTransaction(float *balance, int type)
{
    static int storDuration = 0;
    float value = 0;

    switch (type)
    {
    case 1: // Deposit
        printf("Specify the amount you want to deposit: ");
        scanf("%f", &value);
        *balance += value;
        printf("Your current balance is: %f \n", *balance);
        storDuration++;
        break;

    case 2: // Withdraw
        printf("Specify the amount you want to withdraw: ");
        scanf("%f", &value);
        if (value > *balance)
        {
            printf("Unsifficient Funds! \n");
        }
        else if (value <= *balance)
        {
            *balance -= value;
            printf("Your current balance is: %f \n", *balance);
            storDuration++;
        }
        break;

    case 3: // Check Balance
        printf("Your current balance is: %f \n", *balance);
        storDuration++;
        break;

    case 4:
        printf("Your current balance is: %f \n", *balance);
        printf("You have made %d successful transaction/s \n", storDuration);
        printf("Thank you for using our ATM, Have a nice day.\n");
        break;
    }
}