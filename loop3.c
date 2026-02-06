#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");

    for (int i = 1; i <= n; i++)
    {
        printf("%i\n", i);
    }
}
