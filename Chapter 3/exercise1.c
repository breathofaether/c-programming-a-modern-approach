#include <stdio.h>

int main(void) 
{
    int month, date, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &date, &year);

    printf("You entered the date %d%.2d%d", year, month, date);

    return 0;
}
