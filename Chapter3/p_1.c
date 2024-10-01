#include <stdio.h>
int main()
{
    int a = 2;
    if (a = 4) // for this the output is zero because in c assigning zero into a variable is false and assigning one is true.Here we assigned an integar except zero that's why its output is that integar.
    {
        printf("a is equal to 4\n");
    }
    else{
        printf("a is not equal to 4\n");
    }

    if(a=0) //for this the output is zero because in c assigning zero into a variable is false and assigning one is true.Here we assigned zero that's why its output is zero.
    {
        printf("a is equal to zero\n");
    }
    else{
        printf("a is not equal to zero\n");
    }
    return 0;
}