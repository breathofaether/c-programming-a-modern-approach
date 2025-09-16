#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int digit, i, occurrences[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

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
    }
    


    return 0;
}
