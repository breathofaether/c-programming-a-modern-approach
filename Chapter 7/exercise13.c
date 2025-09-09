#include <stdio.h>

int main(void)
{
    float word_length = 0.0f, counter = 0.0f;
    char ch;

    printf("Enter a sentence: ");

    while (1)
    {
        ch = getchar();
        if (ch == ' ')
        {
            putchar(ch);
            word_length++;
            continue;
        }

        if (ch == '\n')
        {
            word_length++;
            break;
        }

        counter++;
    }

    printf("Average word length: %.1f", counter / word_length);

    return 0;
}
