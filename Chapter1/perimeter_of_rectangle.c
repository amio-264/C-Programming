#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter length and width of the rectangle ");
    scanf("%f%f", &a, &b);
    printf("The perimeter of Rectangle is %f", 2 * (a + b));
    return 0;
}