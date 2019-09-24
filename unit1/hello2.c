#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get user's name
    string name = get_string("Enter a name: ");

    // print a greeting for the user
    printf("hello, %s\n", name);
}