#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int scrabble_value[26] = 
    {   1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 8, 1, 
        3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 
        4, 10
    };
    int i = 0;



    printf("Enter a word: ");

    while((ch = toupper(getchar())) != '\n')
    {
        i += scrabble_value[ch - 'A'];
    }
    printf("Scrabble value: %d", i);

    return 0;
}
