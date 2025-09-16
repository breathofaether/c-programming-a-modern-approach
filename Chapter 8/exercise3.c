#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    long n;
    printf("Enter a number (0 to quit): ");
    
    while (1)
    {
        
        scanf("%ld", &n);

        if (n <= 0)
        {
            break;
        }

        bool digit_seen[10] = {false};
        int digit;
        long temp = n;

        while (temp > 0)
        {
            digit = temp % 10;
            if (digit_seen[digit])
            {
                break;
            }
            digit_seen[digit] = true;
            temp /= 10;
        }

        if (temp > 0)
        {
            printf("Repeated digit\n");
        }
        else
        {
            printf("No repeated digit\n");
        }
    }

    return 0;
}
