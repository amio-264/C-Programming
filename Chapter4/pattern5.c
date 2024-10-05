// Merging two right angle triangle pattern (Star)
#include <stdio.h>
int main()
{
    int n, i, j; // i = row ; j = column
    printf("Enter the number of row: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Merging two right angle triangle pattern (Number)
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row ; j = column
//     printf("Enter the number of row: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     for (i = n - 1; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Merging two right angle triangle pattern (Binary)
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row ; j = column
//     printf("Enter the number of row: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ", j % 2);
//         }
//         printf("\n");
//     }
//     for (i = n - 1; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ", j % 2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Merging two right angle triangle pattern (Alphabetical)
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row ; j = column
//     printf("Enter the number of row: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c ", j + 64);
//         }
//         printf("\n");
//     }
//     for (i = n - 1; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c ", j + 64);
//         }
//         printf("\n");
//     }
//     return 0;
// }