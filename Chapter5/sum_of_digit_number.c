#include <stdio.h>
int sumDigit(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n % 10) + sumDigit(n / 10);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of the digit is %d", sumDigit(n));
    return 0;
}