#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Enter a number: ");
    int y = get_int("Enter another number: ");
    int temp;

    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("The greatest common divisor is %d.\n", x);
}