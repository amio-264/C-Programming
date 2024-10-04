#include <stdio.h>
int main()
{
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d\n", n);
    } while (n % 7 != 0);
    printf("Program executed");
    return 0;
}