#include <stdio.h>

int main(void)
{
    char first_name, left_over, second_name;
    int len = 0;

    printf("Enter a first and last name: ");
    scanf(" %c ", &first_name);
    while ((left_over = getchar()) != ' ');

    while ((second_name = getchar()) != '\n')
    {
        putchar(second_name);
    }

    printf(", %c.", first_name);
    return 0;
}
