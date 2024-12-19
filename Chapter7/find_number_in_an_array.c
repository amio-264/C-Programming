#include <stdio.h>
int main()
{
    int n, x, count = 0;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find: ");
    scanf("%d", &x);
    for (int i = 0; i < n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("The number %d exists %d times in the array", x, count);
    return 0;
}