#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            count++;
        }
    }

    printf("Count = %i\n", count);
}
