#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i; // sum = sum + i
    }
    printf("Sum is %d\n", sum);

    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}