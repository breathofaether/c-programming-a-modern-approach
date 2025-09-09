#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours, minutes;
    char c;

    printf("Enter a 12-hour(hh:mm AM or PM) time: ");
    scanf("%d:%d %c", &hours, &minutes, &c);

    hours = (toupper(c) == 'A' && hours == 12) ? 0 :
            (toupper(c) == 'P' && hours != 12) ? hours + 12 : hours;
    
    printf("Equivalent 24-hour time: %d:%d", hours, minutes);

    return 0;
}
