#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Enter a number: ");
    int y = get_int("Enter another number: ");
    int product = 0;

    while (y > 0)
    {
        product += x;
        y--;
    }

    printf("%d\n", product);
}