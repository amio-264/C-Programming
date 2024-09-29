#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d", &a);
    ((a < b) && printf("The smallest number is: %d\n", a)) ||
        ((b <= a) && printf("The smallest number is: %d\n", b)); //(b <= a && printf("The smallest number is: %d\n", b)): If the first condition is false, this part will execute, printing b. The || ensures that one of the two will be executed.
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