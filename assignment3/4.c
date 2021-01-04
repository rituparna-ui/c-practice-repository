#include <stdio.h>

int main()
{
    int num = 91;
    if (!(num % 7 || num % 13))
    {
        if (!(num % 7 && num % 13))
        {
            printf("divisible by both");
        }
        else
        {
            printf("divisible by either 7 or 13");
        }
    }
    else
    {
        printf("Not divisible by any of 7 or 13");
    }

    return 0;
}