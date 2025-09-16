#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    bool is_anagram = true;
    char ch;
    int i, char_freq[26] = {0};

    printf("Enter first word: ");
    while ((ch = toupper(getchar())) != '\n')
    {
        if (isalpha(ch))
        {
            char_freq[ch - 'A']++;
        }
    }

    printf("Enter second word: ");
    while ((ch = toupper(getchar())) != '\n')
    {
        if (isalpha(ch))
        {
            char_freq[ch - 'A']--;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (char_freq[i] != 0)
        {
            is_anagram = false;
            break;
        }
    }

    if (is_anagram)
    {
        printf("The words are anagrams.");
    }
    else
    {
        printf("The words are not anagrams.");
    }

    return 0;
}
