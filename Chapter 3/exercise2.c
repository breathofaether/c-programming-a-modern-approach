#include <stdio.h>

int main(void) {
    int item_number, month, date, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &date, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%8.2f\t%d/%d/%d", item_number, unit_price, month, date, year);
    
    return 0;
}
