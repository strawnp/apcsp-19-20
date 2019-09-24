#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare two integer variables
    int x = 33;
    int y = 13;

    // print the sum of the two variables
    printf("%d + %d = %d\n", x, y, x + y);

    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d %% %d = %d\n", x, y, x % y);
}