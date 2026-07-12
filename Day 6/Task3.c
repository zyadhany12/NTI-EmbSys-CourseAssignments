#include <stdio.h>
#include <stdlib.h>

int sumMainDiagonal(int matrix[3][3]);
void searchElement(int *ptr, int target);

int main()
{
    int matrix[3][3] = {0};
    int target = 0;
    system("cls");

    for (int i = 0; i < 3; i++)
    {
        printf("Write 3 numbers for row %d (click enter after every number)\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The numbers in a grid format: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d      ", matrix[i][j]);
        }
        printf("\n");
    }
    sumMainDiagonal(matrix);
    searchElement(*matrix, target);
}

int sumMainDiagonal(int matrix[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
        }
    }
    return printf("the sum is: %d \n",sum);
}
void searchElement(int *ptr, int target)
{
    printf("What number are you searching for?  ");
    scanf("%d", &target);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(target == ptr[i * 3 + j]){
                printf("The Number Exists in row %d, and coloumn %d.", i+1, j+1);
            }
            else if(i == 2 && j == 2 && target != ptr[i * 3 + j]){
                printf("The number doesn't exist in the grid. \n");
            }
        }
    }
}
