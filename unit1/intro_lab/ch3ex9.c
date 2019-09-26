#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = get_int("Enter a value for i: ");
    int j = get_int("Enter a value for j: ");

    printf("The next largest even multiple of %f and %d is %d.\n", i, j, i + j - i % j);
}