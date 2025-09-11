#include <stdio.h>
void main()
{
    float base, height, area;
    printf("enter base of triangle: ");
     scanf("%f", &base);
    printf("enter height of triangle: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("area of triangle is: ");
    printf("%f", area);
}