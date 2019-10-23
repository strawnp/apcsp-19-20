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
        if (i % 2 == 0)
        {
            printf("%c", toupper(word[i]));
        }
        else
        {
            printf("%c", tolower(word[i]));
        }
    }
    printf("\n");
}