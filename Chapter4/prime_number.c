#include <stdio.h>
int main()
{
    int n, count = 1; // declaring a variable "count = 1" means its initialized to being a prime number.
    printf("Enter a positive number: ");
    scanf("%d", &n);
    if (n <= 1) // condition checks that 1 or zero can't be prime number
    {
        printf("%d is not a prime number", n);
        return 0;
    }
    for (int i = 2; i < n; i++) // Check the condition if the number is divided by n to n-1
    {
        if (n % i == 0)
        {
            count = 0; // not a prime number
            break;     // exit loop if the number is divided by other numbers except 1 and n
        }
    }
    if (count) // used count variable in this condition to check if the number is prime or not
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}