#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d", &a);
    (!(a < b) && printf("The smallest number is: %d\n", b)) ||
        ((a < b) && printf("The smallest number is: %d\n", a));
    return 0;
    // int a, b;
    // printf("Enter two number: ");
    // scanf("%d%d", &a, &b);
    // if(a>b)
    // {
    //     printf("%d is smallest number\n", b);
    // }
    // else
    // {
    //     printf("%d is smallest number\n", a);
    // }
    // return 0;
}