#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main(void)
{
    char c, message[SIZE];
    int i, len;

    printf("Enter message: ");

    for (i = 0; i < SIZE; i++)
    {
        c = toupper(getchar());
        if (c == '\n')
        {
            break;
        }
        message[i] = c;
    }

    len = i;

    printf("In B1FF-speak: ");
    for (i = 0; i < len; i++)
    {
        switch (c = message[i])
        {
        case 'A':
            putchar('4');
            break;
        case 'B':
            putchar('8');
            break;
        case 'E':
            putchar('3');
            break;
        case 'I':
            putchar('1');
            break;
        case 'O':
            putchar('0');
            break;
        case 'S':
            putchar('5');
            break;
        default:
            putchar(c);
            break;
        }
    }
    printf("!!!!!!!!!!\n");
    
    return 0;
}
