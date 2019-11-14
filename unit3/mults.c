#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./mults <num1> <num2>\n");
        return 1;
    }

    int min = (int) strtol(argv[1], NULL, 10);
    int max = (int) strtol(argv[2], NULL, 10);

    for (int i = min; i <= max; i++)
    {
        for (int j = min; j <= max; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}