#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i = 0;
    char term;

    printf("Enter a sentence: ");

    while (1)
    {
        scanf("%c", &ch);

        if (ch == '.' || ch == '?' || ch == '!' || ch == '\n')
        {
            term = ch;
            break;
        }

        str[i] = ch;
        i++;
    }
    
    int len = i;
    int end = len - 1;

    for (i = len - 1; i >= 0; i--)
    {
        if (str[i] == ' ' || i == 0)
        {
            int start = (i == 0) ? 0 : i + 1;
            
            for (int j = start; j <= end; j++)
            {
                printf("%c", str[j]);
            }

            if (i != 0) printf(" ");
            end = i - 1;
        }
    }

    printf("%c\n", term);

    return 0;
}
