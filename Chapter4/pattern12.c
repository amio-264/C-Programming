#include <stdio.h>
int main()
{
    int n, i, j, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++){
        for (j = 1; j <= i; j++){
            printf("%d ", ++count);
        }
        printf("\n");
    }
        return 0;
}