#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Enter a number whose digits to sum together: ");
    int sum = 0;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("%d\n", sum);
}