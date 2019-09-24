#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;
    int value_in_range = 0;

    do
    {
        num = get_int("Enter a number between 1 and 10: ");
        if (num >= 1 && num <= 10)
        {
            value_in_range = 1;
        }
        else
        {
            printf("Try again. Do not be difficult.\n");
        }
    }
    while (!value_in_range);

    printf("Thanks!\n");
}