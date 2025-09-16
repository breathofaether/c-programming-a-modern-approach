#include <stdio.h>

int main(void)
{
    char first_name, left_over, second_name[20];
    int i = 0;

    printf("Enter a first and last name: ");
    scanf(" %c ", &first_name);
    while ((left_over = getchar()) != ' ');

    while (i < 20 && (second_name[i] = getchar()) != '\n')
    {
        putchar(second_name[i]);
        i++;
    }

    printf(", %c.", first_name);
    return 0;
}
