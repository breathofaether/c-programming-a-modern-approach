#include <stdio.h>

#define N (sizeof(departure_times) / sizeof(departure_times[0]))

int main(void)
{
    int hours, minutes, hours_to_minutes, i, closest = 0;
    int departure_times[] =
        {8 * 60,
         9 * 60 + 43,
         11 * 60 + 19,
         12 * 60 + 47,
         14 * 60,
         15 * 60 + 45,
         19 * 60,
         21 * 60 + 45};
    int arrival_times[] =
        {
            10 * 60 + 26,
            11 * 60 + 52,
            13 * 60 + 31,
            15 * 60,
            16 * 60 + 8,
            17 * 60 + 55,
            21 * 60 + 20,
            23 * 60 + 58};
            
    printf("Enter a 24-hour(hh:mm) time: ");
    scanf("%d:%d", &hours, &minutes);

    hours_to_minutes = hours * 60 + minutes;

    for (i = 1; i < N; i++)
    {
        int diff = hours_to_minutes - departure_times[i];
        if (diff < 0)
            diff = -diff;

        int current_diff = hours_to_minutes - departure_times[closest];
        if (current_diff < 0)
            current_diff = -current_diff;

        if (diff < current_diff)
        {
            closest = i;
        }
    }

    printf("Closest departure time is %02d:%02d, arriving at %02d:%02d",
        departure_times[closest] / 60, departure_times[closest] % 60,
        arrival_times[closest] / 60, arrival_times[closest] % 60);

    return 0;
}
