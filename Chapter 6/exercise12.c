#include <stdio.h>

int main(void)
{
    float e = 1.0f, fact = 1.0f, term = 1.0f, epsilon;
    int i;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    for (i = 1; term >= epsilon; i++)
    {
        fact *= i; // i!
        term = 1.0f / fact; // 1/i!
        e += term;
    }

    printf("Approximate value of e is %.15f\n", e);
    printf("Number of terms used: %d\n", i);

    return 0;
}
