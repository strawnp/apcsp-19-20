# echo!

## Prerequisites
Loops; Arrays

## Problem
echo is a Unix command, that, according to its manual page, "display[s] a line of text." For example:
```c
~/2019_20/csp/unit3/ $ echo This is CS50
This is CS50
```
Implement your own version of the `echo` command. You’ll want to loop through the user’s arguments and print them out one-by-one, adding a space between them. You may want to try the echo command on your own first to get a taste of how it works. Tip: Remember to error check for correct number of command line arguments! (You can't echo that which doesn't exist!)

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // TODO: validate argc
    
    // TODO: print arguments
    
    // (Optional) TODO: print each letter of each argument on its own line
    
    return 0;
}
```
