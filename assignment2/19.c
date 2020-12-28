#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    int d1 = num % 10;
    num /= 10;
    int d2 = num % 10;
    num /= 10;
    int d3 = num % 10;
    num /= 10;
    int d4 = num % 10;
    num /= 10;
    int d5 = num % 10;
    num /= 10;
    printf("%d %d %d %d %d", d1, d2, d3, d4, d5);
    int rev = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;
    if (rev == num)
        printf("palindrome");
    else
    {
        printf("not palindrome");
    }

    return 0;
}