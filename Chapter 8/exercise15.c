#include <stdio.h>
#include <ctype.h>

#define SIZE 80

int main(void)
{
    char message[SIZE];
    int shift_amount, i = 0, len = 0;

    printf("Enter message to be encrypted: ");
    while ((message[i++] = getchar()) != '\n' && i < 80)
        len++;

    printf("Enter shift amount: ");
    scanf("%d", &shift_amount);

    for (i = 0; i < len; i++)
    {
        if (message[i] >= 'a' && message[i] <= 'z')
        {
            message[i] = ((message[i] - 'a') + shift_amount) % 26 + 'a';
        }
        else if ((message[i] >= 'A' && message[i] <= 'Z'))
        {
            message[i] = ((message[i] - 'A') + shift_amount) % 26 + 'A';
        }

        printf("%c", message[i]);
    }

    return 0;
}
