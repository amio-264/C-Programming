// Right angle triangle in right hand side
#include <stdio.h>
int main()
{
    int n, i, j; // i = row ; j = column
    printf("Enter the number of row: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        // printing space
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        // printing number
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}