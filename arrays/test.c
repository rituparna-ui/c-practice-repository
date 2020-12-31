#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 45, 50};
    int *i;
    i = &arr[1];
    printf("%u\n", i);
    printf("%u\n", ++i);

    return 0;
}