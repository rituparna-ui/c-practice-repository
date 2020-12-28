#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    printf("\ninitial values of a and b are %d and %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\ninitial values of a and b are %d and %d", a, b);
    return 0;
}