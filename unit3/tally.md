# Tallying the Arguments

## Prerequisites
Loops; Arrays

## Problem
Write a program that prints out the total number of characters in the command-line arguments given to the program. Ignore whitespace (e.g. spaces, newlines, tab characters), and ignore the program name. For example:
```./counter foo``` should indicate that 3 characters were given. ```./counter foo bar baz``` should indicate that 9 characters were given. ```./counter``` should indicate that 0 characters were given. (Given this last case, do you need to validate `argc`?)

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // TODO
    
    return 0;
}
```
