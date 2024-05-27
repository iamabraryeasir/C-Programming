// Problem: circumference of circle. 2 * PI * r

#include <stdio.h>

#define PI 3.1417

int main()
{
    float radius;

    printf("Enter the Radius: ");
    scanf("%f", &radius);

    printf("\nThe Circumference of the Circle is: %f", 2 * PI * radius);

    return 0;
}