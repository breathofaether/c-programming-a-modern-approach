#include <stdio.h>

int main(void)
{
    int y1, m1, d1, y2, m2, d2, earliest_month, earliest_day, earliest_year;

    printf("Enter a date (mm/dd//yy): ");
    scanf("%d /%d /%d", &m1, &d1, &y1);

    earliest_month = m1, earliest_day = d1, earliest_year = y1;

    for (;;)
    {
        printf("Enter a date (mm/dd//yy): ");
        scanf("%d /%d /%d", &m2, &d2, &y2);

        if (y2 == 0 || m2 == 0 || d2 == 0)
        {
            break;
        }

        if (earliest_year > y2)
        {
            earliest_year = y2, earliest_month = m2, earliest_day = d2;
        }
        else if (y2 > earliest_year)
        {
            continue;
        }
        else
        {
            if (m1 > m2)
            {
                earliest_year = y2, earliest_month = m2, earliest_day = d2;
            }
            else if (m2 > earliest_month)
            {
                continue;
            }
            else
            {
                if (d1 > d2)
                {
                    earliest_year = y2, earliest_month = m2, earliest_day = d2;
                }
                else if (d2 > earliest_day)
                {
                    continue;
                }
                else
                {
                    printf("Same date.");
                }
            }
        }
    }

    printf("%.2d/%.2d/%.2d is the earliest date", earliest_month, earliest_day, earliest_year);

    return 0;
}
