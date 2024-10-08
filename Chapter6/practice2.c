#include <stdio.h>
// output will not be same
void printAddress(int n)
{
    printf("%p\n", &n);
}
// output will be same
void _printAddress(int *n)
{
    printf("%p\n", *(&n));
}
int main()
{
    int n = 4;
    printf("%p\n", &n);
    // for call by reference
    _printAddress(&n);
    // for Call by value
    printAddress(n);
    return 0;
}