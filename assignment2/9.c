#include <stdio.h>

int main()
{
    float circum, r, area;
    printf("Enter circumference\n");
    scanf("%f", &circum);

    r = circum / 6.28;
    area = 3.14 * r * r;
    printf("Area is %.2f", area);

    return 0;
}