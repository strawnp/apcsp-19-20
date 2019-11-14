#include <cs50.h>
#include <stdio.h>

void swap(int, int);

int main(void)
{
    int x = get_int("Enter a number: ");
    int y = get_int("Enter another number: ");

    printf("x = %d, y = %d\n", x, y);

    printf("Swapping...\n");

    swap(x, y);

    printf("x = %d, y = %d\n", x, y);

    printf("Swapped!\n");
}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}