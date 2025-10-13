#include <stdio.h>

int main()
 {
    float side, base, perimeter;

    printf("Enter the length of the equal sides: ");
    scanf("%f", &side);

    printf("Enter the length of the base: ");
    scanf("%f", &base);


    perimeter = 2 * side + base;
    printf("Perimeter of the isosceles triangle = %.2f\n", perimeter);

    return 0;
}
