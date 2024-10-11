#include <stdio.h>
int main()
{
    int arr[2][3];
    arr[0][0] = 98;
    arr[0][1] = 97;
    arr[0][2] = 99;
    arr[1][0] = 95;
    arr[1][1] = 93;
    arr[1][2] = 90;
    printf("%d\t", arr[0][0]);
    printf("%d\t", arr[0][1]);
    printf("%d\t", arr[0][2]);
    printf("\n");
    printf("%d\t", arr[1][0]);
    printf("%d\t", arr[1][1]);
    printf("%d\t", arr[1][2]);
    return 0;
}