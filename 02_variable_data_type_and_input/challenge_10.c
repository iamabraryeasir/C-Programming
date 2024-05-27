// Problem: Swap two numbers.

#include <stdio.h>

int main()
{
    int first_num, second_num, temp;

    printf("Enter 1st number: ");
    scanf("%d", &first_num);

    printf("Enter 2nd number: ");
    scanf("%d", &second_num);

    temp = first_num;

    first_num = second_num;

    second_num = temp;

    printf("After Swap, First Number  : %d\n", first_num);
    printf("After Swap, Second Number : %d\n", second_num);

    return 0;
}