#include <stdio.h>

int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);
    int test = num % 2;
    test == 0 ? printf("even") : printf("odd");

    return 0;
}