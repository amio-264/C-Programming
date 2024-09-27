#include<stdio.h>
int main()
//perimeter of rectangle
{
    float a, b;
    printf("Enter length and width of the rectangle ");
    scanf("%f%f", &a, &b);//Taking input from user
    printf("The perimeter of Rectangle is %f", 2 * (a + b));//Printing the result
    return 0;
}