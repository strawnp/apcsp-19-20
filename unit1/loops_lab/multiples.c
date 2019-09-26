#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Enter a number to see its multiples below 100: ");
    for (int i = num; i <= 100; i += num)
    {
        printf("%d\n", i);
    }
}