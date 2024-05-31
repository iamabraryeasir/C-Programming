#include <stdio.h>

int main()
{
    int num_1, num_2;

    printf("Enter First Num: ");
    scanf("%d", &num_1);

    printf("Enter Second Num: ");
    scanf("%d", &num_2);

    printf("\n%d + %d = %d\n\n", num_1, num_2, num_1 + num_2);

    return 0;
}