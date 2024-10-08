#include <stdio.h>
int main()
{
    float price = 100.0;
    float *ptr = &price; // ptr storing address of price
    float **pptr = &ptr; // pptr storing address of ptr
    printf("%f\n", **pptr);
    return 0;
}