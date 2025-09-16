#include <stdio.h>

#define ROW_SIZE 5
#define COLUMN_SIZE 5

int main(void)
{
    int matrix[5][5], i, j, k, lowest, highest;

    for (i = 0; i < ROW_SIZE; i++)
    {
        printf("Dear student %d, please enter your five grades: ", i + 1);

        for (j = 0; j < COLUMN_SIZE; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < ROW_SIZE; i++)
    {
        k = 0;
        for (j = 0; j < COLUMN_SIZE; j++)
        {
            k += matrix[i][j];
        }
        printf("Dear student %d, your total score is: %d, your average is: %d\n", i + 1, k, k / 5);
    }

    printf("\n");
    for (i = 0; i < ROW_SIZE; i++)
    {
        k = 0;
        lowest = highest = matrix[0][i];
        
        for (j = 0; j < COLUMN_SIZE; j++)
        {
            k += matrix[j][i];
            
            if (matrix[j][i] < lowest)
            {
                lowest = matrix[j][i];
            }

            if (matrix[j][i] > highest)
            {
                highest = matrix[j][i];
            }
        }
        printf("Average score for quiz %d: %d, Highest Score: %d, Lowest score: %d\n", i + 1, k, highest, lowest);
    }

    return 0;
}
