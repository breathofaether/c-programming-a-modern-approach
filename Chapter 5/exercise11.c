#include <stdio.h>

int main(void) 
{
    int num, first_digit, second_digit;

    printf("Enter a two digit number: ");
    scanf("%2d", &num);

    first_digit = num / 10;
    second_digit = num % 10;

    switch (num)
    {
    case 10:
        printf("ten");
        break;
    case 11:
        printf("eleven");
    case 12:
        printf("twelve");
    case 13:
        printf("thirteen");
        break;
    case 14:
        printf("fourteen");
    case 15:
        printf("fifteen");
        break;
    case 16:
        printf("sixteen");
        break;
    case 17:
        printf("seventeen");
        break;
    case 18:
        printf("eighteen");
        break;
    case 19:
        printf("nineteen");
    default:
        break;
    }
    
    switch (first_digit)
    {
    case 9:
        printf("ninety");
        break;
    case 8:
        printf("eighty");
        break;
    case 7:
        printf("seventy");
        break;
    case 6:
        printf("sixty");
        break;
    case 5:
        printf("fifty");
        break;
    case 4:
        printf("forty");
        break;
    case 3:
        printf("thirty");
        break;
    case 2:
        printf("twenty");
        break;
    default:
        break;
    }

    switch (second_digit)
    {
    case 1:
        printf("-one");
        break;
    case 2:
        printf("-two");
        break;
    case 3:
        printf("-three");
        break;
    case 4:
        printf("-four");
        break;
    case 5:
        printf("-five");
        break;
    case 6:
        printf("-six");
        break;
    case 7:
        printf("-seven");
        break;
    case 8:
        printf("-eight");
        break;
    case 9:
        printf("nine");
        break;         
    default:
        break;
    }

    return 0;
}
