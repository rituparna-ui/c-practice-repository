#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter sides\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == b && a == c)
    {
        printf("Equilateral Triangle");
    }
    else if (a == b || a == c || b == c)
    {
        printf("isoceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }

    return 0;
}