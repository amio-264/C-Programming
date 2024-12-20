#include <stdio.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 = {"Amio", 220307, 3.58};
    printf("%s\n%d\n%f", s1.name, s1.roll, s1.cgpa);
    return 0;
}