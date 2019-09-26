#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1 = get_int("Enter a number: ");
    int num2 = get_int("Enter another number: ");

    if (num2 == 0)
    {
        printf("Division by zero is undefined.\n");
    }
    else
    {
        float ans = (float) num1 / num2;
        printf("%d / %d = %.3f\n", num1, num2, ans);
    }
}