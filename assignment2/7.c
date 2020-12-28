#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, period, amt;
    printf("Enter principal,rate,period");
    scanf("%f %f %f", &principal, &rate, &period);
    amt = principal * pow((1 + rate), period);
    return 0;
}