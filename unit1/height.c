#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long height = get_long("Enter your height in inches: ");
    printf("%lld feet, %lld inches\n", height / 12, height % 12);
}