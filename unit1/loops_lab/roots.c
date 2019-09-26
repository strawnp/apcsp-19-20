#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf(" n \t sqrt(n)\n");
    printf("---\t---------\n");
    for (int i = 1; i <= 15; i++)
    {
        printf("%d\t  %.3f\n", i, sqrt(i));
    }
}