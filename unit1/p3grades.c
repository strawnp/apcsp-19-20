#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int grade = get_int("");

    if (grade >= 101)
    {
        printf("Invalid");
    }
    else if (grade >= 90)
    {
        if (grade >= 97)
        {
            printf("A+");
        }
        else
        {
            printf("A");
        }
    }
    else if (grade >= 80)
    {
        printf("B");
    }
    else if (grade >= 70)
    {
        printf("C");
    }
    else
    {
        printf("Failure");
    }
    printf("\n");
}