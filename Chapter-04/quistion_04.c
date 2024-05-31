// Problem Name: Separate the Digits From a number;

/*
Input: 369

Output: 9
        6
        3

*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the Number: ");
    scanf("%d", &num);

    while (num != 0) // or num > 0
    {
        printf("%d\n", num % 10);

        num = num / 10;
    }

    return 0;
}