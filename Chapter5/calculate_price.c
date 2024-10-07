#include <stdio.h>
void calculatePrice(float value);
int main()
{
    float value;
    printf("Enter the MRP of the product: ");
    scanf("%f", &value);
    calculatePrice(value);
    printf("The MRP of the product is %f\n", value);
    return 0;
}

void calculatePrice(float value){
    value = value + (.18 * value);
    printf("Final price is %f\n", value);
}