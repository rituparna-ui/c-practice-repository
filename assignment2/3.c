#include <stdio.h>

int main()
{
    float r,area;
    printf("Enter radius\n");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("The area is %.2f",area);
    return 0;
}