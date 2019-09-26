#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 25; i++)
    {
        if (i % 3 == 0)
        {
            printf("Fizz");
        }
        if (i % 5 == 0)
        {
            printf("Buzz");
        }
        if (i % 3 != 0 && i % 5 != 0)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}