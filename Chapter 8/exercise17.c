#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int size, i, j, num;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter the size of magic square: ");
    scanf("%d", &size);

    int magic_square[size][size];

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            magic_square[i][j] = 0;
        }
    }

    int row = 0;
    int col = size / 2;

    for (num = 1; num <= size * size; num++)
    {
        magic_square[row][col] = num;

        int next_row = (row - 1 + size) % size;
        int next_col = (col + 1) % size;

        if (magic_square[next_row][next_col] != 0)
        {
            row = (row + 1) % size;
        }
        else
        {
            row = next_row;
            col = next_col;
        }
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%4d", magic_square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
