#include <stdio.h>
#define PI 3.1416
int main()
// area of the circle
{
    float r;
    printf("Enter the radius of the circle ");
    scanf("%f", &r);                                    // Taking input from user
    printf("The area of the circle is %f", PI * r * r); // Printing the area
    return 0;
}