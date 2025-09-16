#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROWS 10
#define NUM_COLS 10

int main(void)
{
    char grid[NUM_ROWS][NUM_COLS], letter = 'A';
    int i, j, row = 0, col = 0;

    for (i = 0; i < NUM_ROWS; i++)
    {
        for (j = 0; j < NUM_COLS; j++)
        {
            grid[i][j] = '.';
        }
    }

    srand((unsigned)time(NULL));
    grid[row][col] = letter;

    while(letter < 'Z')
    {
        bool tried[4] = {false}, moved = false;

        while(tried[0] + tried[1] + tried[2] + tried[3] < 4)
        {
            int dir = rand() % 4;
            tried[dir] = true;

            int new_row = row, new_col = col;

            if (dir == 0) new_row--; // up
            else if (dir == 1) new_row++; // down
            else if (dir == 2) new_col--; // left
            else if (dir == 3) new_col++; // right

            if (new_row >= 0 && new_row < NUM_ROWS &&
                new_col >= 0 && new_col < NUM_COLS &&
                grid[new_row][new_col] == '.')
            {
                row = new_row;
                col = new_col;
                letter++;
                grid[row][col] = letter;
                moved = true;
                break;
            }
        }

        if (!moved)
        {
            break;
        }
    }

    for (i = 0; i < NUM_ROWS; i++)
    {
        for (j = 0; j < NUM_COLS; j++)
        {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
