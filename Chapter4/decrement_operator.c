#include <stdio.h>
int main()
{
    // i=i-1 can be written as i-- as well as i-=1
    // i=i-n can be written as i-=n
    // decrement operator
    // --i(pre decrement)
    // i--(post decrement)

    int i = 1;
    printf("%d\n", i--); // use, then decrease
    printf("%d\n", i);

    int j = 1;
    printf("%d\n", --j); // decrease, then use
    printf("%d\n", j);
    return 0;
}