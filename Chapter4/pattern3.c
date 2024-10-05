// Reverse right angle triangle (Number)
#include <stdio.h>
int main()
{
    int n, i, j; // i = row, j = column
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) // changing the loop here
    {
        for (j = 1; j <= i; j++) // next loop remain as it was
        {
            printf("%d ",j); // print the column
        }
        printf("\n");
    }
    return 0;
}

// Reverse right angle triangle (Binary)
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row, j = column
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (i = n; i >= 1; i--) // changing the loop here
//     {
//         for (j = 1; j <= i; j++) // next loop remain as it was
//         {
//             printf("%d ", j%2); // print the column
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Reverse right angle triangle (Characters)
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row, j = column
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (i = n; i >= 1; i--) // changing the loop here
//     {
//         for (j = 1; j <= i; j++) // next loop remain as it was
//         {
//             printf("%d ", j+64); // print the column
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Reverse right angle triangle (Special Character)
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row, j = column
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (i = n; i >= 1; i--) // changing the loop here
//     {
//         for (j = 1; j <= i; j++) // next loop remain as it was
//         {
//             printf("* "); // print the column
//         }
//         printf("\n");
//     }
//     return 0;
// }