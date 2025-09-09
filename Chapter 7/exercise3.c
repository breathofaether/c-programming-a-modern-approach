#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("This program sums a series of floating-point numbers.\n");
    printf("Enter numbers (0 to terminate): ");

    scanf("%lf", &n);

    while (n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is %.2lf\n", sum);

    return 0;
}
