#include <stdio.h>
int main()
{
    float a, b, c,avg;
    printf("Enter three numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("Average of three numbers is %0.2f\n", avg = (a + b + c) / 3);
    return 0;
}