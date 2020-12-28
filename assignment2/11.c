#include <stdio.h>

int main()
{
    float u, a, t;
    printf("Enter initial velocity, acceleration, time");
    float s = u * t + (a * t * t) / 2;
    printf("Displacement is %.2f", s);

    return 0;
}