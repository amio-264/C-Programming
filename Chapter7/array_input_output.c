#include <stdio.h>
int main()
{
    int mark[3]; //declare array
    printf("Enter phy: ");
    scanf("%d", &mark[0]);
    printf("Enter chem: ");
    scanf("%d", &mark[1]);
    printf("Enter math: ");
    scanf("%d", &mark[2]);
    printf("Physics = %d\nChemistry = %d\nMath = %d\n", mark[0], mark[1], mark[2]);
    return 0;
}