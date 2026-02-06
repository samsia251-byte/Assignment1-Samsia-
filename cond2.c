#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int m = get_int("Enter marks: ");

    if (m >= 90)
        printf("Grade: A\n");
    else if (m >= 80)
        printf("Grade: B\n");
    else if (m >= 70)
        printf("Grade: C\n");
    else
        printf("Grade: F\n");

    return 0;
}

