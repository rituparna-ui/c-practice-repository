#include <stdio.h>

int main()
{
    int num = 91;
    if (!(num % 7 || num % 13))
    {
        printf("Numer s divisible by either 7 or 13");
    }
    else
    {
        printf("Not Divisible");
    }

    return 0;
}