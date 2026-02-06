#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");
    int count = 0;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    printf("Number of digits = %i\n", count);
}
