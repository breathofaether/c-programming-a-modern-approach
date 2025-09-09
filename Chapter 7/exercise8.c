#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours, minutes, hours_to_minutes;
    char c;

    printf("Enter a 12-hour(hh:mm) time: ");
    scanf("%d:%d %c", &hours, &minutes, &c);

    hours = (toupper(c) == 'A' && hours == 12) ? 0 :
            (toupper(c) == 'P' && hours != 12) ? hours + 12 : hours;
    hours_to_minutes = hours * 60 + minutes;

    if (hours_to_minutes <= (8 * 60))
    {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    }
    else if (hours_to_minutes <= (9 * 60 + 43))
    {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    }
    else if (hours_to_minutes <= (11 * 60 + 19))
    {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    }
    else if (hours_to_minutes <= (12 * 60 + 47))
    {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    }
    else if (hours_to_minutes <= (14 * 60))
    {
        printf("Closest departure time is 14:00 p.m., arriving at 4:08 p.m.");
    }
    else if (hours_to_minutes <= (15 * 60 + 45))
    {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    }
    else if (hours_to_minutes <= (19 * 60))
    {
        printf("Closest departure time is 19:00 p.m., arriving at 9:20 p.m.");
    }
    else
    {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
    }

    return 0;
}
