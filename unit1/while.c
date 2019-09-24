#include <cs50.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    printf("This program generates a random number between 1 and 100. You should get it every time in 7 guesses or fewer.\n");

    int num = rand() % 100 + 1;
    // printf("%d\n", num);

    int correct = 0;
    int guesses = 0;

    while (!correct)
    {
        int guess = get_int("Enter your guess: ");
        guesses++;

        if (guess == num)
        {
            correct = 1;
            printf("Correct!\n");
        }
        else if (guess < num)
        {
            printf("Higher\n");
        }
        else
        {
            printf("Lower\n");
        }
    }

    printf("You got it right in %d guesses. ", guesses);

    if (guesses <= 7)
    {
        printf("Excellent job!\n");
    }
    else
    {
        printf("Be better.\n");
    }
}