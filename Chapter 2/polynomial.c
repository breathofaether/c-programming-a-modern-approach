#include <stdio.h>

int main(void)
{
    int x, polynomial;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    // polynomial = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
    polynomial = (((((3 * x) + 2) * x - 5) * x - 1) * x + 7 )* x - 6;
    printf("%d", polynomial);

    return 0;
}
