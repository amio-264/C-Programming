#include <stdio.h>
int main()
{
    int arr[3] = {1, 2, 3};
    // int *ptr = &arr[0];
    int *ptr = arr; // Can be written in both ways
    printf("%p", ptr);
    return 0;
}