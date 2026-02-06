#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = 1; // counter for numbers

    for (int i = 1; i <= 4; i++) // rows
    {
        for (int j = 1; j <= i; j++) // columns
        {
            printf("%i ", num);
            num++;
        }
        printf("\n");
    }
}
