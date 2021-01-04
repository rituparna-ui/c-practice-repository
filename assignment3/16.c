#include <stdio.h>

int main()
{
    float basic, hra, da, gross;
    printf("Enter basic salary\n");
    scanf("%f", &basic);
    if (basic <= 30000)
    {
        hra = 0.2;
        da = 0.3;
    }
    else if (basic > 30000 && basic <= 60000)
    {
        hra = 0.25;
        da = 0.35;
    }
    else
    {
        hra = 0.3;
        da = 0.4;
    }
    gross = basic + basic * hra + basic * da;

    printf("Gross salary is %f", gross);

    return 0;
}