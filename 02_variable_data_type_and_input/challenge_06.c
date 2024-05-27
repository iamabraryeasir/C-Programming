#include <stdio.h>

int main()
{
    char first_name[10], last_name[10];
    int age;

    printf("Enter First Name: ");
    scanf("%s", &first_name);

    printf("Enter Last Name: ");
    scanf("%s", &last_name);

    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("\nHi, %s %s. You are %d years old.\n\n", first_name, last_name, age);

    return 0;
}