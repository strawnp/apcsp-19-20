#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get two integer variables from user
    int x = get_int("Enter a number: ");
    int y = get_int("Enter another one: ");

    // print the sum of the two variables
    printf("%d + %d = %d\n", x, y, x + y);

    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d %% %d = %d\n", x, y, x % y);
}