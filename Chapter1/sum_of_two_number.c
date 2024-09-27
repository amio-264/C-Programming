#include<stdio.h>
int main()
//C Program for sum of two numbers
{
    int a, b, sum;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b); //taking input from user
    sum = a + b;//performing the sum
    printf("The sum is %d", sum);//printing the output
    return 0;
}