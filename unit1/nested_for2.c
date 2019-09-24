#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("This program prints a pyramid with a height of your choosing.\n\n");
    int height = get_int("How many rows would you like in your pyramid? ");

    for (int i = 0; i < height; i++)
    {
        for (int j = height - (i + 1); j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < (i * 2 + 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}