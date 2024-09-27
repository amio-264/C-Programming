#include<stdio.h>
#define PI 3.1416
int main()
{
    float r;
    printf("Enter the radius of the circle ");
    scanf("%f", &r);
    printf("The area of the circle is %f", PI * r * r);
    return 0;
}