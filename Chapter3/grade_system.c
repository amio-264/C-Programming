// Marks
// 80-100 --> A+
// 70-79 --> A
// 60-69 --> B
// 50-59 --> C
// 40-49 --> D
// 33-39 --> E
// 0-33 -->

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 80)
    {
        printf("A+\n");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("A\n");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("B\n");
    }
    else if (marks >= 60 && marks < 50)
    {
        printf("C\n");
    }
    else if (marks >= 50 && marks < 40)
    {
        printf("D\n");
    }
    else if (marks >= 40 && marks <= 33)
    {
        printf("E\n");
    }
    else if(marks < 33)
        {
            printf("F\n");
        }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}