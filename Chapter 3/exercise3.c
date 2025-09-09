#include <stdio.h>

int main(void) 
{
    int prefix, group_identifier, pub_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group_identifier, &pub_code, &item_number, &check_digit);

    printf("GS1 prefix: %.3d\n", prefix);
    printf("Group identifier: %.1d\n", group_identifier);
    printf("Publisher code: %.3d\n", pub_code);
    printf("Item number: %.5d\n", item_number);
    printf("Check digit: %.1d", check_digit);

    return 0;
}
