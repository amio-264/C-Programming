#include <stdio.h>
int fib(int n);
int main()
{
    printf("%d", fib(9)); // printing the nth term of the series
    return 0;
}
int fib(int n)
{
    { //base case
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
    }
    int fibN1 = fib(n - 1);
    int fibN2 = fib(n - 2);
    int fibN = fibN1 + fibN2;
    return fibN;
}