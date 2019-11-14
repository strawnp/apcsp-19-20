#include <cs50.h>
#include <stdio.h>

#define ROWS 3
#define COLS 3

void fillGrid(char[ROWS][COLS]);
void printGrid(char[ROWS][COLS]);

int main(void)
{
    char board[ROWS][COLS];
    printf("board in main() = %p\n", board);

    fillGrid(board);
    printGrid(board);
}

void fillGrid(char board[ROWS][COLS])
{
    printf("board in fillGrid() = %p\n", board);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            board[i][j] = '_';
        }
    }
}

void printGrid(char board[ROWS][COLS])
{
    printf("board in printGrid() = %p\n", board);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf(" %c ", board[i][j]);
        }
        printf("\n");
    }
}