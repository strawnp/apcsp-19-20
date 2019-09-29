#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int dim;
    int dim_in_range = 0;

    do
    {
        dim = get_int("Enter the dimension of your hashtag square: ");
        if (dim >= 1 && dim <= 23)
        {
            dim_in_range = 1;
        }
        else
        {
            printf("Your dimension must be in the range [1, 23].\n");
        }
    }
    while (!dim_in_range);

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}