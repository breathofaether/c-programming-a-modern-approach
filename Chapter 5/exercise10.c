#include <stdio.h>

int main(void)
{
    int grade, grade_tens;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    grade_tens = grade / 10;

    switch (grade_tens)
    {
    case 9: case 10: 
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    case 0: case 1: case 2: case 3: case 4: case 5:
        printf("F");
        break;
    default:
        printf("Invalid grade.");
        break;
    }

    return 0;
}
