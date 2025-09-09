#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 99)
    {
        printf("The number %d has 3 digits", num);
    }
    else if (num > 9 && num <= 99)
    {
        printf("The number %d has 2 digits", num );
    }
    else 
    {
        printf("The number %d has 1 digit", num);
    }

    return 0;
}
