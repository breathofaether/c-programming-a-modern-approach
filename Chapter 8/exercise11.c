#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch[15];
    int i = 0;

    printf("Enter phone number: ");

    while(i < 15)
    {
        ch[i] = toupper(getchar());
        if (ch[i] == "\n")
        {
            break;
        }

        if (ch[i] >= 'A' && ch[i] <= 'C') ch[i] = '2';
        else if (ch[i] >= 'D' && ch[i] <= 'F') ch[i] = '3';
        else if (ch[i] >= 'G' && ch[i] <= 'I') ch[i] = '4';
        else if (ch[i] >= 'J' && ch[i] <= 'L') ch[i] = '5';
        else if (ch[i] >= 'M' && ch[i] <= 'O') ch[i] = '6';
        else if (ch[i] >= 'P' && ch[i] <= 'S') ch[i] = '7';
        else if (ch[i] >= 'T' && ch[i] <= 'V') ch[i] = '8';
        else if (ch[i] >= 'W' && ch[i] <= 'Y') ch[i] = '9';
        putchar(ch[i]);
    
        i++;
    }    

    return 0;
}
