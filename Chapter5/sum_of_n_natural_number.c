#include <stdio.h>
#include <math.h>
int sum(int n);
int main()
{
    printf("Sum is: %d", sum(5));
    return 0;
}
int sum(int n){
    if (n == 1){ // Base Case which stops the recursive calls which prevents infinite recursion
        return 1;
    }
    int sumN1 = sum(n-1);//Sum of 1 to N
    int sumN = sumN1 + n;
    return sumN;
}