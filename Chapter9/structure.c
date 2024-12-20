#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1;
    strcpy(s1.name, "Amio");
    s1.roll = 220307;
    s1.cgpa = 3.58;
    printf("%s\n%d\n%f", s1.name, s1.roll, s1.cgpa);
    return 0;
}