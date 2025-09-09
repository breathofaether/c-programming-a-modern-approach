#include <stdio.h>

int main(void)
{
    int days_in_month, starting_day, i, n;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    n = starting_day;

    for (i = 1; i < starting_day; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days_in_month; i++, n++)
    {
        printf("%2d ", i);
        if (n % 7 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
