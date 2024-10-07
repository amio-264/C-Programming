#include <stdio.h>
void printTable(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printTable(n); // Actual parameter or Argument
    return 0;
}
void printTable(int n) // Parameter or formal parameter
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, i * n);
    }
}