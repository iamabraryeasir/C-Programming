// Problem: Area of the Circle.

#include <stdio.h>

int main()
{
    const float PI = 3.1417;
    float radius;

    printf("Enter the Radius: ");
    scanf("%f", &radius);

    printf("\nThe Area of the Circle is: %f", PI * radius * radius);

    return 0;
}