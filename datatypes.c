#include <stdio.h>

int main()
{

    int a = 1;
    float b = 1.6;
    char c = 'g';

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));

    scanf("%d", &a);
    printf("The value of a is %d", a);

    return 0;
}