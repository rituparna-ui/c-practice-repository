#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("initial values of a and b are %d and %d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Final values of a and b are %d and %d", a, b);

    return 0;
}