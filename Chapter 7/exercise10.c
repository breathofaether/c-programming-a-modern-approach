#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int vowel_count = 0;
    char c;

    printf("Enter a sentence: ");

    while ((c = toupper(getchar())) != '\n')
    {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vowel_count++;
        }
    }
    printf("Your sentence has %d vowels", vowel_count);
    
}
