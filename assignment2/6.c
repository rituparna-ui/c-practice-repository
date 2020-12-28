#include <stdio.h>

int main()
{
    float p, r, si;
    int n;
    printf("Enter principle, period and rate\n");
    scanf("%f %d %f", &p, &n, &r);
    si = p * n * r / 100;
    printf("the simple interest is %.2f", si);

    return 0;
}