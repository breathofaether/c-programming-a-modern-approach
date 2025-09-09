#include <stdio.h>

int main(void)
{
    float loan_amount, monthly_payment, interest_rate, no_of_payments, i;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%f", &no_of_payments);

    for (i = 1; i <= no_of_payments; i++)
    {
        loan_amount = (loan_amount - monthly_payment) + (loan_amount * ((interest_rate / 100) / 12));
        printf("Balance remaining after monthly payment: %.2f\n", loan_amount);
    }

    return 0;
}
