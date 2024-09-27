#include<stdio.h>
int main()
{
    // valid declaration
    int a, b, c;
    a = b = c = 10;
    printf("%d", a);
    /*
    invalid declaration
    int a=b=c=10;
    */
    return 0;
}