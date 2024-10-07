#include <stdio.h>
int main()
{
    int n, nextTerm, a = 0, b = 1;
    printf("Enter the term no: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0th fibonacci term is 0\n");
        return 0;
    }
    if (n == 1)
    {
        printf("1st fibonacci term is 1\n");
    }
    for (int i = 2; i <= n; i++)
    {
        nextTerm = a + b; // next fibonacci term
        a = b; // update a to previous term
        b = nextTerm; // update b to current term
    }
    printf("%ld", b);
    return 0;
}