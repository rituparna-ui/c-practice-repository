#include <stdio.h>

int main()
{
    int num = 12;
    if (num == 0)
    {
        printf("Number is zero");
    }
    else if (num > 0)
    {
        printf("Number is positive");
    }
    else if (num < 0)
    {
        printf("Number is negative");
    }
    else
    {
        return 0;
    }

    return 0;
}