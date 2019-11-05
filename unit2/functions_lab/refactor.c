#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int makeSelection();
void sign(int);
void comparison(int, int);
void divisibility(int, int);
void division(int, int);

int main(int argc, string argv[])
{
    if (argc < 2 || argc > 3)
    {
        printf("Usage: ./refactor <num1> [num2]\n");
        return 1;
    }

    if (argc == 2)
    {
        int num1 = (int) strtol(argv[1], NULL, 10);
        sign(num1);
    }
    else
    {
        int num1 = (int) strtol(argv[1], NULL, 10);
        int num2 = (int) strtol(argv[2], NULL, 10);
        int choice = makeSelection();

        if (choice == 1)
        {
            comparison(num1, num2);
        }
        else if (choice == 2)
        {
            divisibility(num1, num2);
        }
        else
        {
            division(num1, num2);
        }
    }
}

int makeSelection()
{
    int selection;

    do
    {
        selection = get_int("Enter 1 for comparison, 2 for divisibility, or 3 for division: ");
    }
    while (selection < 1 || selection > 3);

    return selection;
}

void sign(int x)
{
    if (x > 0)
    {
        printf("Positive");
        if (x % 2)
        {
            printf("\nOdd");
        }
        else
        {
            printf("\nEven");
        }
    }
    else if (x < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    printf("\n");
}
void comparison(int x, int y)
{
    if (x > y)
    {
        printf("%d is greater than %d\n", x, y);
    }
    else if (x > y)
    {
        printf("%d is greater than %d\n", x, y);
    }
    else
    {
        printf("%d is the same as %d\n", x, y);
    }
}

void divisibility(int x, int y)
{
    if (x % y == 0)
    {
        printf("%d is evenly divisible by %d\n", x, y);
    }
    else
    {
        printf("%d is not evenly divisible by %d\n", x, y);
    }
}

void division(int x, int y)
{
    if (y == 0)
    {
        printf("Division by zero is undefined.\n");
    }
    else
    {
        float ans = (float) x / y;
        printf("%d / %d = %.3f\n", x, y, ans);
    }
}