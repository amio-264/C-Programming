// Right Angle Triangle Pattern
#include <stdio.h>
int main()
{
    int n, i, j; // i = row and j = column
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i); // printing the value of row only
        }
        printf("\n");
    }
    return 0;
}