#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num_grades = get_int("How many grades do you want to enter? ");
    int sum = 0;
    int* grades = malloc(sizeof(int) * num_grades);

    for (int i = 0; i < num_grades; i++)
    {
        grades[i] = get_int("Enter a grade: ");
        sum += grades[i];
    }

    printf("Average score: %.2f\n", (float) sum / num_grades);

    free(grades);
}