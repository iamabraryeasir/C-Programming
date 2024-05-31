// Problem Name: Count the Positive and Negative numbers.

#include <stdio.h>

int main()
{
    int n, positive_count = 0, negative_count = 0, zero_count = 0;

    printf("How many value do you have: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int num;

        printf("Enter num %d: ", i);
        scanf("%d", &num);

        if (num > 0)
        {
            positive_count++;
        }
        else if (num < 0)
        {
            negative_count++;
        }
        else
        {
            zero_count++;
        }
    }

    printf("There were:\n\n");
    printf("    %d Zeros.\n", zero_count);
    printf("    %d Negative Numbers.\n", negative_count);
    printf("    %d Positive Numbers.\n", positive_count);

    return 0;
}