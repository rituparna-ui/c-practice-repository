#include <stdio.h>

int main()
{
    float u, v, a, t;
    printf("enter u, a, t\n");
    scanf("%f %f %f", &u, &a, &t);

    v = u + a * t;
    printf("final velocity is %.2f", v);

    return 0;
}