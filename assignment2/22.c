#include <stdio.h>

int main()
{
    float a, b;
    printf("enter two numbers a and b");
    scanf("%f %f", &a, &b);
    if (a > b)
    {
        printf("a is greater than b");
    }
    else if (a == b)
    {
        printf("Both equal");
    }
    else
    {
        printf("B is greater than a");
    }

    return 0;
}