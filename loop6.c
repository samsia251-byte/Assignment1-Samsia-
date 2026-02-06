#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += i; // add i to sum
    }

    printf("Sum = %i\n", sum);
}
