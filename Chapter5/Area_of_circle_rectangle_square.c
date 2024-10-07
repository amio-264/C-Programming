#include <stdio.h>
#include <math.h>
float areaSquare(float side);
float areaRectangle(float a,float b);
float areaCircle(float radius);
int main()
{
    float side, a, b, radius;
    printf("Enter the side of a square: ");
    scanf("%f", &side);
    printf("Enter the sides of a rectangle: ");
    scanf("%f%f", &a, &b);
    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);
    printf("The area of the square is %f\n", areaSquare(side));
    printf("The area of the Rectangle is %f\n", areaRectangle(a, b));
    printf("The area of the Circle is %f\n", areaCircle(radius));
    return 0;
}

float areaSquare(float side){
    return side * side;
}

float areaRectangle(float a, float b)
{
    return a * b;
}

float areaCircle(float radius){
    return 3.1416 * radius * radius;
}