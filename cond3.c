#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");

    if (a > b)
        printf("Larger number: %i\n", a);
    else if (b > a)
        printf("Larger number: %i\n", b);
    else
        printf("Both numbers are Equal\n");

    return 0;
}
