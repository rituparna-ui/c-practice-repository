#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Enter coeff a b and c\n");
    scanf("%f %f %f", &a, &b, &c);
    float disc = b * b - 4 * a * c;
    if (disc >= 0)
    {
        float r1 = (-b + sqrt(disc)) / (2 * a);
        float r1 = (-b - sqrt(disc)) / (2 * a);
        printf("The roots are %.2f and %.2f", r1, r2);
    }
    else
    {
        printf("The roots are not real");
    }

    return 0;
}