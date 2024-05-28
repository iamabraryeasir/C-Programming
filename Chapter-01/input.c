#include <stdio.h>

int main()
{
    char name[10];
    int age;

    printf("What is your name? : ");
    scanf("%s", &name); // scanf function is used to take user input in c.

    printf("What is your age? : ");
    scanf("%d", &age);

    printf("\nHi, %s. Great you are %d years old.\n\n", name, age);
    return 0;
}