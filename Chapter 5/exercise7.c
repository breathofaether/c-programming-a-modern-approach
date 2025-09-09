#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, min1, min2, max1, max2, overall_min, overall_max;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", n1, n2, n3, n4);

    if (n1 > n2) // Comparing variables n1 and n2 to identify min1 and max1
    {
        min1 = n2;
        max1 = n1;
    } 
    else 
    {
        min1 = n1;
        max1 = n2;
    }
    
    if (n3 > n4) // Comparing variables n3 and n4 to identify min2 and max2
    {
        min2 = n4;
        max2 = n3;
    } 
    else 
    {
        min2 = n3;
        max2 = n4;
    }
    
    if (min1 > min2) // Comparing variables min1 and min2 to identify overall min
    {
        overall_min = min2;
    }
    else
    {
        overall_min = min1;
    }

    if (max2 > max1) // Comparing variables max1 and max2 to identify overall max
    { 
        overall_max = max2;
    }
    else
    {
        overall_max = max1;
    } 

    printf("Largest: %d\nSmallest: %d", overall_max, overall_min);

    return 0;
}
