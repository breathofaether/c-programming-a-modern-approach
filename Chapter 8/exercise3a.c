#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int digit, i, occurrences[10] = {0};
    long n;

    while (1)
    {
        printf("Enter a number (0 to quit): ");
        scanf("%ld", &n);

        if (n == 0)
        {
            break;
        }

        while (n > 0)
        {
            digit = n % 10;
            occurrences[digit]++;
            n /= 10;
        }

        printf("Digit:\t      ");
        for (i = 0; i < 10; i++)
        {
            printf("%d ", i);
        }

        printf("\nOccurrences:  ");
        for (i = 0; i < 10; i++)
        {
            printf("%d ", occurrences[i]);
            occurrences[i] = 0;
        }
        printf("\n");
    }

    return 0;
}
