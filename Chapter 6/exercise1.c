#include <stdio.h>

int main(void)
{
    float num, largest = 0;

    for (;;)
    {
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num == 0) break;
        if (num > largest) largest = num;
    }

    printf("The largest number entered was %.2f", largest);

    return 0;
}
