#include <stdio.h>
void main()
{
    float radius, area;
    printf("enter the radius of circle : ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("area of circle is : ");
    printf("%f", area);
}