#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float tempC = get_float("C: ");
    float tempF = tempC * 9 / 5 + 32;
    printf("F: %.1f\n", tempF);
}