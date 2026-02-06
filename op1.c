#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter first integer: ");
    int b = get_int("Enter second integer: ");

    printf("Sum = %i\n", a + b);
    printf("Difference = %i\n", a - b);
    printf("Product = %i\n", a * b);

    if (b != 0)
    {
        printf("Quotient = %i\n", a / b);
        printf("Remainder = %i\n", a % b);
    }
    else
    {
        printf("Quotient = Undefined (division by zero)\n");
        printf("Remainder = Undefined (division by zero)\n");
    }

    return 0;
}
