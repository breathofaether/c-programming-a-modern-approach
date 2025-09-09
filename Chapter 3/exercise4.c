#include <stdio.h>

int main(void)
{
    int code, num1, num2;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &code, &num1, &num2);

    printf("You entered %d.%d.%d", code, num1, num2);

    return 0;
}
