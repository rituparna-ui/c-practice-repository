#include <stdio.h>
int main()
{
    int n, rem, sum = 0, var;
    printf("enter the number=");
    scanf("%d", &n);
    var = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (var == sum)
        printf("armstrong  number ");
    else
        printf("not armstrong number");
    return 0;
}