#include <stdio.h>
int countEven(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d\n", countEven(arr, 6));
    return 0;
}