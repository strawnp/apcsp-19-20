#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1 = get_int("Enter a number: ");
    int num2 = get_int("Enter another number: ");

    if (num1 % num2 == 0)
    {
        printf("%d is evenly divisible by %d\n", num1, num2);
    }
    else
    {
        printf("%d is not evenly divisible by %d\n", num1, num2);
    }
}