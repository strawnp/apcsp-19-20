#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int grade = get_int("Enter your grade: ");

    if (grade > 100)
    {
        printf("Impossible");
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
    else if (grade >= 60)
    {
        printf("D");
    }
    else
    {
        printf("You did poorly");
    }
    printf("\n");
}