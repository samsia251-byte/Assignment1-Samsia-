#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float celsius = get_float("Enter temperature in Celsius: ");

    float fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
