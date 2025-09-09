#include <stdio.h>

int main(void)
{
    float loan_amount, monthly_payment, interest_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    loan_amount = (loan_amount - monthly_payment) + (loan_amount * ((interest_rate / 100) / 12));
    printf("Balance remaining after first payment: %.2f\n", loan_amount);

    loan_amount = (loan_amount - monthly_payment) + (loan_amount * ((interest_rate / 100) / 12));
    printf("Balance remaining after second payment: %.2f\n", loan_amount);

    loan_amount = (loan_amount - monthly_payment) + (loan_amount * ((interest_rate / 100) / 12));
    printf("Balance remaining after third payment: %.2f\n", loan_amount);

    return 0;
}
