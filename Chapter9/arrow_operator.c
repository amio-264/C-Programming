#include <stdio.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 = {"Amio", 220307, 3.58};
    printf("student.roll = %d\n", s1.roll);
    struct student *ptr = &s1;
    printf("student.roll with ptr = %d\n", (*ptr).roll);
    printf("student -> roll = %d\n", ptr->roll);
    return 0;
}