#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SALES_TAX 0.0875

int main(void)
{
    // define variables
    float subtotal = 0, tip, tax, total;
    int rating;

    // get user input
    int items = get_int("How many items did you order? >");
    float* costs = malloc(sizeof(float) * items);

    // get prices from user
    for (int i = 0; i < items; i++)
    {
        costs[i] = get_float("Cost of item %d: ", i + 1);
        subtotal += costs[i];
    }

    // get the rating from the user
    do
    {
        rating = get_int("Quality of service (1-4): ");
    }
    while (rating < 1 || rating > 4);

    // calculate tip based on rating
    if (rating == 1)
    {
        tip = subtotal * 0.1;
    }
    else if (rating == 2)
    {
        tip = subtotal * 0.15;
    }
    else if (rating == 3)
    {
        tip = subtotal * 0.18;
    }
    else
    {
        tip = subtotal * 0.2;
    }

    // calculate tax
    tax = subtotal * SALES_TAX;

    // calculate meal total
    total = subtotal + tax + tip;

    // print results
    printf("Subtotal:\t$%.2f\n", subtotal);
    printf("Tax:\t\t$%.2f\n", tax);
    printf("Tip:\t\t$%.2f\n", tip);
    printf("Total:\t\t$%.2f\n", total);

    // free memory
    free(costs);
}