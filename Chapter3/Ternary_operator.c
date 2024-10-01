#include <stdio.h>
int main()
{
    /*
    Syntax for ternary operator
    Condition?Execute for True statement:Execute for False Statement
    */
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    age >= 18 ? printf("Adult\n") : printf("Not Adult\n");
    return 0;
}