#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
void printinfo(struct student s1){
    printf("student information: \n");
    printf("student.name = %s\n", s1.name);
    printf("student.roll = %d\n", s1.roll);
    printf("student.cgpa = %f\n", s1.cgpa);
}
int main(){
    struct student s1 = {"Amio", 220307, 3.58};
    printinfo(s1);
}