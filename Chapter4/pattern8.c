#include <stdio.h>
int main()
{
    int n, i, j; // i= row ; j = column
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            printf("* ", j);
        }
        printf("\n");
    }
        return 0;
}