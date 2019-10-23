#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get string from user
    string word = get_string("Enter a string: ");

    // iterate over the string
    for (int i = 0, j = strlen(word); i < j; i++)
    {
        printf("%d", word[i]);
        if (i < (j - 1))
        {
            printf("-");
        }
    }
    printf("\n");
}