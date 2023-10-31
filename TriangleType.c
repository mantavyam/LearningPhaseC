#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("It's an equilateral triangle.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("It's an isosceles triangle.\n");
    } else {
        printf("It's a scalene triangle.\n");
    }

    return 0;
}