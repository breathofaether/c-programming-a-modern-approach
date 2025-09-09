#include <stdio.h>

int main(void)
{
    int i, fact = 1, n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (fact > __SHRT_MAX__) break;
        fact *= i;
    }

    printf("Factorial of %d: %d", n, fact);

    return 0;
}
