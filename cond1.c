#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");

    if (n > 0)
    {
        printf("The number is Positive\n");
    }
    else if (n < 0)
    {
        printf("The number is Negative\n");
    }
    else
    {
        printf("The number is Zero\n");
    }

    return 0;
}
