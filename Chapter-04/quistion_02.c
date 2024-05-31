// Problem Name: Average of n numbers.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int num;

        printf("Enter num %d: ", i);
        scanf("%d", &num);

        sum = sum + num;
    }

    double avg = (float)sum / n;

    printf("The Average is = %lf", avg);

    return 0;
}