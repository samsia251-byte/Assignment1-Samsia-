#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("Enter your age: ");
    int student = get_int("Are you a student? (1 for yes, 0 for no): ");
    int ticket_price;

    if (age < 12)
    {
        ticket_price = 50;
    }
    else if (age <= 60)
    {
        if (student == 1)
        {
            ticket_price = 80;
        }
        else
        {
            ticket_price = 100;
        }
    }
    else // age > 60
    {
        ticket_price = 60;
    }

    printf("Your ticket price is: %i\n", ticket_price);
}
