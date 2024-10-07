#include <stdio.h>
#include <math.h>
float printPow(float n){
    return pow(n,n);
}
int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    printf("%f", printPow(n));
    return 0;
}