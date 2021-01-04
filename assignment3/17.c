#include <stdio.h>

int main()
{
    float units, cost, total, charge = 0;
    printf("Enter units");
    scanf("%f", &units);

    if (units >= 200)
    {
        charge = 0.2;
    }

    while (units>=0)
    {
        if (units >=50)
        {
            cost = units*50;
            cost -=50;
        }
        else if (/* condition */)
        {
            /* code */
        }
        
        
    }
    

    return 0;
}