#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, old_y = 1, y = 0, average;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while(fabs(old_y - y) > (.00001 * y))
    {
        average = ((x / old_y) + old_y) / 2;
        y = old_y;
        old_y = average;
    }

    printf("Square root: %.5f", old_y);

    return 0;
}
