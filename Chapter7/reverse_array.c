#include <stdio.h>
void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverseArray(arr, 6);
    printArray(arr, 6);
    return 0;
}