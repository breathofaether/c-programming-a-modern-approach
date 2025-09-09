#include <stdio.h>
#define PI 3.14159265358979323846

int main(void)
{
    float radius, volume; 
    
    printf("Enter value of radius: ");
    scanf("%f", &radius);
    volume = (4.0f/3.0f) * PI * (radius * radius * radius);
    
    printf("Volume of sphere with radius 10: %.3f", volume);
    
    return 0;
}
