#include <stdio.h>
int main()
{
    float price[3] = {100.0, 200.0, 300.0}; // initialization of array
    // float price[] = {100.0, 200.0, 300.0}; //can be written like this
    printf("Total price 1: %f\n", price[0] + (.18 * price[0]));
    printf("Total price 2: %f\n", price[1] + (.18 * price[1]));
    printf("Total price 3: %f\n", price[2] + (.18 * price[2]));
    return 0;
}