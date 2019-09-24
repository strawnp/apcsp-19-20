#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1 = get_int("Enter a number: ");
    int num2 = get_int("Enter another number: ");

    if (num1 > num2)
    {
        printf("%d is greater than %d\n", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("%d is greater than %d\n", num2, num1);
    }
    else
    {
        printf("%d is the same as %d\n", num1, num2);
    }
}