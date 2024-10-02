#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i; // sum = sum + i
    // }
    // printf("Sum is %d", sum);

    // for (int i = n; i >= 1; i--)
    // {
    //     printf("%d\n", i);
    // }

    // for (int j = n; j >= 1; j--)
    // {
    //     sum += j;
    //     printf("%d\n", j);
    // }
    // printf("The sum is %d\n", sum);
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum += i;
        printf("%d\n", j);
    }
    printf("Sum is %d\n",sum);
    return 0;
}