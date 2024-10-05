// Reverse right angle triangle (number)
#include <stdio.h>
int main()
{
    int n, i, j; // i = row and j = column
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1;i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i); // printing the value of row only
        }
        printf("\n");
    }
    return 0;
}

// Reverse right angle triangle (Binary)
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row and j = column
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (i = n; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ", i % 2); // printing the value of row only
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Reverse right angle triangle (Binary)
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row and j = column
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (i = n; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c ", i + 64); // printing the value of row only
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Reverse right angle triangle (Binary)
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row and j = column
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (i = n; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("* ", i % 2); // printing the value of row only
//         }
//         printf("\n");
//     }
//     return 0;
// }