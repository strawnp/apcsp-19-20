#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char ltr = get_char("Enter a letter: ");

    switch (ltr)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("Vowel");
            break;
        case 'y':
        case 'Y':
            printf("It depends");
            break;
        default:
            printf("Consonant");
            break;
    }

    printf("\n");
}