#include <stdio.h>

int main()
{
    int num = 91;
    if (!(num % 7 || num % 13))
    {
        printf("okay");
    }
    else
    {
        printf("Not Divisible");
    }

    return 0;
}