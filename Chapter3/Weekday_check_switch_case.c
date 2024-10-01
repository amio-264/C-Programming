// Switch Case Syntax switch (variable)
// {
// case C1:
//     do something
//     break;
// case C2:
//     do something
//     break;
// default:
//     do something
//     break;
// }
#include <stdio.h>
int main()
{
    int day; // 1-Sat;2-Sun;3-Mon;4-Tues;5-Wed;6-Thurs;7-Fri
    printf("Enter day (1-7): ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wednesday\n");
        break;
    case 6:
        printf("Thursday\n");
        break;
    case 7:
        printf("Friday\n");
        break;
    default:
        printf("Not a valid Day\n");
    }
    return 0;
}