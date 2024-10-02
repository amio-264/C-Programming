// Syntax for do while loop
// Variable declaration
// do
// {
//     do something
// } while (condition);

#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}