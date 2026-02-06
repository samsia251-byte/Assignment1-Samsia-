#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %i\n", fact);
}
