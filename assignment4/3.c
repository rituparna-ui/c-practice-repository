#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}