#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("This program prints integers from 1 to an integer of your choice, incrementing by a value you choose.\n");
    int stop = get_int("What is the highest number you'd like to print? ");
    int inc = get_int("By how much would you like to increment each time? ");

    for (int i = 1; i <= stop; i += inc)
    {
        printf("%d\n", i);
    }
}