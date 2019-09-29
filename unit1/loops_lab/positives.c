#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int user_num;
    int num_is_positive = 0;

    do
    {
        user_num = get_int("Enter a positive integer: ");

        if (user_num > 0)
        {
            num_is_positive = 1;
        }
        else
        {
            printf("Please enter a positive integer.\n");
        }
    }
    while (!num_is_positive);

    printf("Thank you!\n");
}