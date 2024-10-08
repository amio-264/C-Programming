#include <stdio.h>
void square(int n);
void _square(int *n);
int main()
{
    int number = 4;
    square(number); // passing value
    printf("Number %d\n", number);
    _square(&number); // passing address
    printf("Number %d\n", number);
    return 0;
}
// Call by value : passing value of variable as argument
void square(int n){
    n = n * n;
    printf("Square %d\n", n);
}
// Call by reference : passing address of variable as argument
void _square(int *n){
    *n = (*n) * (*n);
    printf("Square %d\n", *n);
}