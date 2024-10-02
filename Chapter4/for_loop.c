// Syntax of for loop
// for(initialisation;condition;updation)
// {
//     do something
// }

#include <stdio.h>
int main()
{
    // i is termed as iterator; counter 
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    for (int j = 4; j >= 1; j--)
    {
        printf("%d\n", j);
    }
    return 0;
}