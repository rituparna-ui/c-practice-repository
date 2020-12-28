#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s;
    printf("Enter the lenght of 3 sides of the triangle");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of triangle is %.2f", area);

    return 0;
}