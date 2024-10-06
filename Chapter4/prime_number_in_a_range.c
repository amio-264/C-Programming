#include <stdio.h>
int main()
{
    int start, end, num, prime, count;
    // Take input from user of start and end point
    printf("Enter the start and end value:\n");
    scanf("%d%d", &start, &end);
    // print the prime numbers between those intervals
    printf("The prime numbers between %d and %d are:\n", start, end);
    for (num = start; num <= end; num++)
    {
        prime = 1; // prime number
        for (count = 2; count < num; count++)
        {
            if (num % count == 0)
            {
                prime = 0; // not prime number
                break;     // exiting from loop if it is divisible
            }
        }
        if (prime)
        {
            printf("%d ", num); // printing the prime numbers
        }
    }
    return 0;
}