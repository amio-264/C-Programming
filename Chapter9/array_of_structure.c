#include <stdio.h>
#include <string.h>
struct student
{
    char name[200];
    int roll;
    float cgpa;
};
int main()
{
    struct student CSE[100];
    struct student EEE[100];
    CSE[0].roll = 220307;
    strcpy(CSE[0].name, "Amio");
    printf("%d\n%s", CSE[0].roll, CSE[0].name);
    return 0;
}