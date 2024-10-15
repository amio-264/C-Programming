#include <stdio.h>
void storeTable(int arr[][10], int x, int y, int n)
{
    for (int i = 0; i < y; i++){
        arr[x][i] = n * (i + 1);
    }
}
int main()
{
    int table[2][10];
    storeTable(table, 0, 10, 2);
    storeTable(table, 1, 10, 3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[0][i]);
    }

    printf("\n");

    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[1][i]);
    }
    return 0;
}