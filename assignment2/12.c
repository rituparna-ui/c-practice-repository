#include <stdio.h>

int main()
{
    float temp;
    printf("enter temp on deg C\n");
    scanf("%f", &temp);
    float tempC = (temp * 9 / 5) + 32;
    printf("temperature in farenheit is %.2f", tempC);

    return 0;
}