#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Enter a number to reverse: ");

    while (num > 0)
    {
        printf("%d", num % 10);
        num /= 10;
    }
    printf("\n");
}