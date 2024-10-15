#include <stdio.h>
void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++) // count till half of the array "n/2"
    {
        int firstVal = arr[i]; // storing first value here
        int secondVal = arr[n - i - 1]; // storing second value here
        arr[i] = secondVal; // swapping first value with last
        arr[n - i - 1] = firstVal; // swapping second value with second last
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]); // printing the loop
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