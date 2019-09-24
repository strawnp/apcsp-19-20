#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("This program prints a staircase with a height of your choosing.\n\n");
    int height = get_int("How many rows would you like in your staircase? ");

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}