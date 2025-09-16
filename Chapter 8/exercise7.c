#include <stdio.h>

#define ROW_SIZE 5
#define COLUMN_SIZE 5

int main(void)
{
    int matrix[5][5], i, j, k;

    for (i = 0; i < ROW_SIZE; i++)
    {
        printf("Enter row %d: ", i + 1);

        for (j = 0; j < COLUMN_SIZE; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Row totals: ");
    for (i = 0; i < ROW_SIZE; i++)
    {
        k = 0;
        for (j = 0; j < COLUMN_SIZE; j++)
        {
            k += matrix[i][j];
        }
        printf("%d ", k);
    }

    printf("\nColumn totals: ");
    for (i = 0; i < ROW_SIZE; i++)
    {
        k = 0;
        for (j = 0; j < COLUMN_SIZE; j++)
        {
            k += matrix[j][i];
        }
        printf("%d ", k);
    }

    return 0;
}
