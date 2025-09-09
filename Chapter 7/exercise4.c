#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Enter a phone number: ");

    while((ch = toupper(getchar())) != '\n')
    {
        if (ch >= 'A' && ch <= 'C') ch = '2';
        else if (ch >= 'D' && ch <= 'F') ch = '3';
        else if (ch >= 'G' && ch <= 'I') ch = '4';
        else if (ch >= 'J' && ch <= 'L') ch = '5';
        else if (ch >= 'M' && ch <= 'O') ch = '6';
        else if (ch >= 'P' && ch <= 'S') ch = '7';
        else if (ch >= 'T' && ch <= 'V') ch = '8';
        else if (ch >= 'W' && ch <= 'Y') ch = '9';
    
        putchar(ch);
    }    
    return 0;
}
