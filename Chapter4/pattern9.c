#include <stdio.h>
int main()
{
    int n, i, j; // i = row ; j = column
    printf("Enter the number of row: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            printf("%d ", i * j);
        }
        printf("\n");
    }
        return 0;
}