#include <stdio.h>

int main()
{
    int integer = 34;
    float floating_point_num = 3.1427;
    char character = 'A';
    double double_value = 20034;


    printf("Size Of int is    : %d Bytes\n", sizeof(integer));
    printf("Size Of float is  : %d Bytes\n", sizeof(floating_point_num));
    printf("Size Of char is   : %d Bytes\n", sizeof(character));
    printf("Size Of double is : %d Bytes\n", sizeof(double));
    return 0;
}