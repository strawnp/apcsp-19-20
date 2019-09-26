#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Enter a number: ");

    if (num > 0)
    {
        printf("Positive");
        if (num % 2)
        {
            printf("\nOdd");
        }
        else
        {
            printf("\nEven");
        }
    }
    else if (num < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    printf("\n");
}