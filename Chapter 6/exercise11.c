#include <stdio.h>

int main(void)
{
    int i, n, fact;
    float e;
    
    printf("Enter integer n: ");
    scanf("%d", &n);

    for(i = 1, fact = 1, e = 1.0f; i <= n; i++)
    {
        fact *= i;
        e += 1.0f / fact;
    }

    printf("Approximate value of e is: %f", e);

    return 0;
}
