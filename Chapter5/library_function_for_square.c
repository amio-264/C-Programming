#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    printf("The square of %f is %f", n, pow(n, 2));
    return 0;
}