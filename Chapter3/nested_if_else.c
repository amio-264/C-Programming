// Nested if - else syntax
// if (condition 1)
// {
//     statement if condition 1 is true;
//     if (condition 2)
//     {
//         statement if condition 2 is true;
//     }
//     else
//     {
//         statement if condition 2 is false;
//     }
//     else
//     {
//         statement if condition 1 is false;
//         if (condition 3)
//         {
//             statement if condition 3 is true;
//         }
//         else
//         {
//             condition if condition 3 is false;
//         }
//     }
// }

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n >= 0)
    {
        printf("Positive number\n");
        if (n % 2 == 0)
        {
            printf("Even number\n");
        }
        else
        {
            printf("Odd number\n");
        }
    }
    else
    {
        printf("Negative number\n");
        if (n % 2 == 0)
        {
            printf("Even number\n");
        }
        else
        {
            printf("Odd number\n");
        }
    }
    return 0;
}