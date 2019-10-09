#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s1 = "hello";

    char s2[] = "hello";

    char s3[6] = "hello";

    char* s4 = "hello";

    char* s5 = malloc(sizeof(char) * 6);
    strncpy(s5, "hello", 5);

    for (int i = 0; i < strlen(s5); i++)
    {
        printf("%c\n", s5[i]);
    }

    free(s5);
}