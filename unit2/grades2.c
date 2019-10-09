#include <cs50.h>
#include <stdio.h>

#define NUM_GRADES 8

int main(void)
{
    int grades[NUM_GRADES];
    int sum = 0;

    for (int i = 0; i < NUM_GRADES; i++)
    {
        grades[i] = get_int("Enter a grade: ");
        sum += grades[i];
    }

    printf("Average score: %.2f\n", (float) sum / NUM_GRADES);
}