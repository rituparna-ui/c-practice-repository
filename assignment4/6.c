#include <stdio.h>

int main()
{
    int n = 4;

    for (int i = n; i >= 0; i--)
    {
        for (int j = n; j >= n - i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}