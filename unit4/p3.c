#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Name: ");
    printf("hello, %s\n", name);

    printf("hello, world\n");

    int x = 42;
    char c = 'B';
    float f = 3.14;

    printf("%d\n", x);
    printf("%c\n", c);
    printf("%f\n", f);

    int grade = get_int("Enter your grade: ");
    if (grade >= 90) { printf("A\n"); }
    else if (grade >= 80) { printf("B\n"); }
    else { printf("Sad\n"); }

    for (int i = 1; i < 10; i++)
    {
        printf("%d\n", i);
    }

    int arr[] = {1,2,3,4,5};
    int arr_size = 5;

    for (int i = 0; i < arr_size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
