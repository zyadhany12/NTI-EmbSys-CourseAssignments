#include <stdio.h>


void modifyString(char *str);

int main()
{
    char word[8] = "0";

    printf("Write your Word: ");
    scanf(" %s", word);
    modifyString(word);
    printf("Your modified word is: %s\n", word);
}

void modifyString(char *str)
{
    int vowelCount = 0;
    for (int i = 0; i < 7; i++) //*str
    {
        if (*str == 'u' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o')
        {
            vowelCount++;
        }
        if (*str > 96)
        {
            *str = *str - 32;
        }
        *str++;
    }
    printf("The number of Vowels is: %d\n", vowelCount);
}