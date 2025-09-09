#include <stdio.h>

int main(void)
{
    int m, n, rem;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (n != 0)
    {
        rem = m % n;
        m = n;
        n = rem;
    }
    
    if (m == 0) 
    {
        printf("Undefined");
    } 
    else 
    {
        printf("Greatest common divisor: %d", m);
    } 
    return 0;
}
