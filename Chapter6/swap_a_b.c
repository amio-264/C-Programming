#include <stdio.h>
void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    printf("a = %d and b = %d\n", a, b);
    return;
}
void _swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("*a = %d  and *b = %d\n", *a, *b);
    return;
}
int main()
{
    int x = 3, y = 5;
    swap(x, y);
    printf("x = %d and y = %d\n", x, y);
    printf("After using call by reference: \n");
    _swap(&x, &y);
    printf("x = %d and y = %d\n", x, y);
    return 0;
}