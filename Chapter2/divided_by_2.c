#include <stdio.h>
int main()
{
    /*
    %d=0 then its odd
    %d=1 then its even
    */
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d", n % 2 == 0);
    return 0;
}