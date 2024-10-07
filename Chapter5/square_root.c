#include <stdio.h>
#include <math.h>
float printSqrt(float n)
{
    float result = sqrt(n);
    return result;
}
int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    printf("Square root of %.2f is %f\n", n, printSqrt(n));
    return 0;
}