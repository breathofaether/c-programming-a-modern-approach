#include <stdio.h>

int main(void)
{
    short i;
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        short square = i * i;
        if (square > 0)
        {
            printf("%10hd%10hd\n", i, i * i);
        }
        else {
            printf("This is the smallest value that causes failure: %hd", i);
            break;
        }
        
    }
    
    return 0;
}
