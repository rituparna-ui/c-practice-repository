#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter angles");

    scanf("%f %f %f", &a, &b, &c);
    float sum = a + b + c;
    if (sum == 180)
    {
        printf("It is a triangle");
    }
    else
    {
        printf("This does not form a triangle");
    }

    return 0;
}