#include <stdio.h>

int main(void) 
{
    int amount, number_of_twenty_bills, number_of_ten_bills, number_of_five_bills, number_of_one_bills;

    printf("Enter an amount: ");
    scanf("%d", &amount);
    
    number_of_twenty_bills = amount / 20;
    amount = amount - (number_of_twenty_bills * 20);

    number_of_ten_bills = amount / 10;
    amount = amount - (number_of_ten_bills * 10);

    number_of_five_bills = amount / 5;
    amount = amount - (number_of_five_bills * 5);

    number_of_one_bills = amount / 1;

    printf("$20 bills: %d\n", number_of_twenty_bills);
    printf("$10 bills: %d\n", number_of_ten_bills);
    printf("$5 bills: %d\n", number_of_five_bills);
    printf("$1 bills: %d\n", number_of_one_bills);

    return 0;
}
