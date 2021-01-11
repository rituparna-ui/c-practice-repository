#include <stdio.h>

int main()
{
    int n = 2;
    for (
        printf("Line: %d, n = %d", __LINE__, n);
        n, printf("Line: %d, n = %d", __LINE__, n);
        printf("Line: %d, n = %d", __LINE__, n), n--)
    {
        printf("Line: %d, n = %d", __LINE__, n);
    }
    
    printf("Line: %d, n = %d", __LINE__, n);

    return 0;
}