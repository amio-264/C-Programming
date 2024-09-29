#include <stdio.h>
int main()
{
    int a = 8 ^ 8;
    printf("%d", a); //valid
    int x;int y = x; //valid
    // int x, y = x; // invalid
    // char stars = '***'; // invalid
    return 0;
}