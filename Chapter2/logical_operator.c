#include <stdio.h>
int main()
{
    printf("%d/n", (4 > 3) && (5 > 3)); // used AND operator where both condition are true
    printf("%d/n", (4 > 5) && (5 > 3)); // used AND operator but output will be zero
    printf("%d/n", (4 > 3) || (2 > 3)); // used OR operator and output will be 1
    printf("%d/n", (1 > 3) || (2 > 3)); // used OR operator and output will be zero
    return 0;
}