#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string word = get_string("Enter a string: ");

    for (int i = 0, j = strlen(word); i < j; i++)
    {
        // do the things
        // access of a character: word[i]
    }
}