#include <stdio.h>
int main()
{
    // i=i+1 can be written as i++ as well as i+=1
    // i=i+n can be written as i+=n
    // increment operator
    // ++i(pre increment)
    // i++(post increment)
    
    int i = 1;
    printf("%d\n", i++); // use, then increase
    printf("%d\n", i);

    int j = 1;
    printf("%d\n", ++j); // increase, then use
    printf("%d\n", j);
    return 0;
}