#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for (int i = 1; i < n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("The largest number in the array is: %d ", largest);
    return 0;
}