#include <stdio.h>
int sum(int a, int b); // function declaration for sum
int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int s = sum(a, b); //calling the function and storing the returning value
    printf("Sum is: %d\n", s);
    return 0;
}

// copying the value of a and b to x and y
int sum(int x, int y){
    return x + y; // returning the sum to function sum
}