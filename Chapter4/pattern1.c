//Right Angle Triangle Pattern
#include <stdio.h>
int main()
{
    int n, i, j; // i = row and j = column
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j); // printing the column value
        }
        printf("\n");
    }
        return 0;
}
// Right Angle Triangle Pattern
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row and j = column
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ", j % 2); // printing the column value which is 0 or 1
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Right Angle Triangle Pattern
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row and j = column
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("* "); // printing the column value which is special character
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Right Angle Triangle Pattern
// #include <stdio.h>
// int main()
// {
//     int n, i, j; // i = row and j = column
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c ", j + 64); // printing the column value which is character
//         }
//         printf("\n");
//     }
//     return 0;
// }