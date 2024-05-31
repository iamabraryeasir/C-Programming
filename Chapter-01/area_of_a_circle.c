#include <stdio.h>

int main()
{
    float radius; // Declaring a variable to store radius. 
    const float PI = 3.1416; // Declaring a variable to store the value of PI as Constant.

    printf("Enter the Radius: "); // Taking input.
    scanf("%f", &radius);

    printf("\nThe Area of the Circle is : %.2f", PI * radius * radius); // Calculating and Printing the Result.
    return 0;
}