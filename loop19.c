#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 4; i >= 1; i--) // rows
    {
        for (int j = 1; j <= i; j++) // stars in each row
        {
            printf("*");
        }
        printf("\n");
    }
}
