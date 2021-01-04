#include <stdio.h>

int main()
{
    int a, b, c;
    if (a < b)
    {
        if (a < c)
        {
            printf("A is minimun");
        }
    }
    if (b < c)
    {
        if (b < a)
        {
            printf("A is minimun");
        }
    }
    if (c < a)
    {
        if (c < b)
        {
            printf("A is minimun");
        }
    }

    return 0;
}