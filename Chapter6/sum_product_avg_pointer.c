#include <stdio.h>
void task(int a, int b, int *sum, int *prod, int *avg);
int main()
{
    int a = 3, b = 5;
    int sum, prod, avg;
    task(a, b, &sum, &prod, &avg);
    printf("Sum = %d\nProduct = %d\nAverage = %d\n", sum, prod, avg);
    return 0;
}
void task(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}