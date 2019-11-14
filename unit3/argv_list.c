#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // outer loop: rows
    for (int i = 0; i < argc; i++)
    {
        // inner loop: columns -> individual characters in each arg
        for (int j = 0; j < strlen(argv[i]); j++)
        {
            printf("argv[%d][%d]: %c\n", i, j, argv[i][j]);
        }
        printf("\n");
    }
}