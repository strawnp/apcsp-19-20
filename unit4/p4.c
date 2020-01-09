#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");

    for (int i = 1; i <= 10; i+=2)
    {
        printf("%d\n", i);
    }

    int x = 42;
    char c = 'B';
    float y = 3.14;

    int nums[] = {1,2,3,4,5};
    int nums_size = 5;

    for (int i = 0; i < nums_size; i++)
    {
        printf("%d\n", nums[i]);
    }

    int a = get_int("Num 1: ");
    int b = get_int("Num 2: ");

    if (a > b) 
    {
        printf("A is greater");
    }
    else if (a < b)
    {
        printf("B is greater");
    }
    else
    {
        printf("Equal");
    }

}

