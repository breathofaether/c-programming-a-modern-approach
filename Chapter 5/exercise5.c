#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    if (income < 750.00f) printf("Tax due $%.2f", income * 0.01);
    else if (income < 2250.00f) printf("Tax due $%.2f", 7.50f + (0.02f * (income - 750.00f)));
    else if (income < 3750.00f) printf("Tax due $%.2f", 37.50f + (0.03f * (income - 2250.00f)));
    else if (income < 5250.00f) printf("Tax due $%.2f", 82.50f + (0.04f * (income - 3750.00f)));
    else if (income < 7000.00f) printf("Tax due $%.2f", 142.50f + (0.05f * (income - 5250.00f)));
    else printf("Tax due $%.2f", 230.00f + (0.06f * (income - 7000.00f)));

    return 0;
}
