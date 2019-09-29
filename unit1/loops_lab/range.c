#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int range_lo = get_int("Enter the low end of the range: ");
    int range_hi = get_int("Enter the high end of the range: ");

    if (range_lo >= range_hi)
    {
        printf("The first value must be less than the first.\n");
    }
    else
    {
        int user_num;
        int num_in_range = 0;

        do
        {
            user_num = get_int("Enter a number in the range %d-%d: ", range_lo, range_hi);

            if (user_num >= range_lo && user_num <= range_hi)
            {
                num_in_range = 1;
            }
            else
            {
                printf("Please enter a number in the range specified.\n");
            }
        }
        while (!num_in_range);

        printf("Thank you!\n");
    }
}