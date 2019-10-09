#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int grades[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        grades[i] = get_int("Enter a grade: ");
        sum += grades[i];
    }

    printf("Average score: %.2f\n", (float) sum / 5);
}