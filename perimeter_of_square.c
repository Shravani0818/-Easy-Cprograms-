#include <stdio.h>
void main()
{
    float side, perimeter;
    printf("enter the side of square : ");
    scanf("%f", &side);
    perimeter = 4 * side;
    printf("perimeter of square is : ");
    printf("%f", perimeter);
}