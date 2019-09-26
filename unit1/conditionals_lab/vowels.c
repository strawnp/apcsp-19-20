#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char ltr = get_char("Enter a letter: ");

    if (ltr == 'a' || ltr == 'e' || ltr == 'i' || ltr == 'o' || ltr == 'u' ||
        ltr == 'A' || ltr == 'E' || ltr == 'I' || ltr == 'O' || ltr == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    printf("\n");
}