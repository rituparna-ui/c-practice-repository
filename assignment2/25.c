#include <stdio.h>

int main()
{
    int year;
    printf("Enter year\n");
    scanf("%d", &year);
    int test = year % 4;
    test == 0 ? printf("leap") : printf("not leap");

    return 0;
}