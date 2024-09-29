#include <stdio.h>
int main()
{
    /*
    ->zero is invalid
    ->one is valid
    */
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d\n", isSunday && isSnowing);
    int isMonday = 0;
    int isRaining = 1;
    printf("%d\n", isMonday || isRaining);
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d\n", a > 9 && a < 100);
    return 0;
}