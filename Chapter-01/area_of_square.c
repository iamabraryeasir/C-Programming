#include <stdio.h>

int main()
{
    float side; // Declaring Variable.

    printf("side = "); // Taking input.
    scanf("%f", &side);

    printf("\nThe area of square is: %.2f\n\n", side * side); // Calculating and Printing the Output.

    return 0;
}