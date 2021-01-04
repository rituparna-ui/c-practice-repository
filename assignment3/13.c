#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter sides");
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("It forms a triangle");
    }
    else
    {
        printf("It does not form a triangle");
    }

    return 0;
}