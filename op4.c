#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = 5;

    printf("Initial value of x: %i\n", x);

    // Post-increment
    printf("x++ = %i\n", x++);
    printf("After x++ , x = %i\n", x);

    // Pre-increment
    printf("++x = %i\n", ++x);

    // Post-decrement
    printf("x-- = %i\n", x--);
    printf("After x-- , x = %i\n", x);

    // Pre-decrement
    printf("--x = %i\n", --x);

    return 0;
}
