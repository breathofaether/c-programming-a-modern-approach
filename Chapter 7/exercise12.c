#include <stdio.h>

int main(void)
{
    float num = 0.0f, total = 0.0f;
    char op;

    printf("Enter an expression: ");
    scanf("%f", &total);

    while ((op = getchar()) != '\n') 
    {

        if (op == '+')
        {
            scanf("%f", &num);
            total += num;
        }
        else if (op == '-')
        {
            scanf("%f", &num);
            total -= num;
        }
        else if (op == '*')
        {
            scanf("%f", &num);
            total *= num;
        }
        else if (op == '/')
        {
            scanf("%f", &num);
            total /= num;
        }
    } 

    printf("Value of expression: %.1f", total);

    return 0;
}
