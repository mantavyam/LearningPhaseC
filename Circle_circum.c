#include <stdio.h>

int main() {
    // Calculate Circumference of Circle
    // Calculate Area of Circle
    const double PI = 3.14159;
    double radius, circumference, area;
    printf("Enter the Radius of Circle:");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius ;
    area = PI * radius * radius;
    printf("\nCircumference of Circle: %.2lf", circumference);
    printf("\nArea of Circle: %.2lf", area);
    return 0;
}
