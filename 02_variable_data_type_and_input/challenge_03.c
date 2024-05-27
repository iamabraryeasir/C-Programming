/*
Problem: Take the users name as input and print `Hi, user_name. Welcome to Code With Abrar.`
*/

#include <stdio.h>

int main()
{
    char name[20];

    printf("What is your name? ");
    scanf("%s", &name);

    printf("\nHi, %s. Welcome to Code With Abrar.\n\n", name);
    return 0;
}