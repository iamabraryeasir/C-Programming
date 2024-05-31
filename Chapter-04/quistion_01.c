// Problem: Write a C Program to print the sum of a series up to nth term.

#include <stdio.h>

int main()
{

    int sum;

    for (int i = 1; i <= 99; i += 5)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}