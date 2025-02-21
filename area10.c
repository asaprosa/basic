#include <stdio.h>

int main() {
    float side, length, width, radius, base, height;
    const float PI = 3.14159;
    
    // Square
    printf("Enter the side length of a square: ");
    scanf("%f", &side);
    printf("Area of Square = %.2f square units\n\n", side * side);
    
    // Rectangle
    printf("Enter the length and width of a rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area of Rectangle = %.2f square units\n\n", length * width);
    
    // Circle
    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);
    printf("Area of Circle = %.2f square units\n\n", PI * radius * radius);
    
    // Triangle
    printf("Enter the base and height of a triangle: ");
    scanf("%f %f", &base, &height);
    printf("Area of Triangle = %.2f square units\n", 0.5 * base * height);
    
    return 0;
}
