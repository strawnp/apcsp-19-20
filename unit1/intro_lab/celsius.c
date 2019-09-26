#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float tempF = get_float("F: ");
    float tempC = (tempF - 32) * 5 / 9;
    printf("C: %.1f\n", tempC);
}