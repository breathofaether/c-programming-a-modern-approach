#include <stdio.h>

int main(void)
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i * i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i*i);
        }
    }

    return 0;
}
