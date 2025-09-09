#include <stdio.h>
#define TAX 0.05f

int main(void) {
    float amount, total;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    
    total = (TAX * amount) + amount;
    printf("With tax added: $%.2f", total);
    
    return 0;
}
