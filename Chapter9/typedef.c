#include <stdio.h>
typedef struct student
{
    char name[100];
    int roll;
    float cgpa;
} stu; // 'stu' refers to the alias of structure student "stu" can be used in the main function after this
int main(){
    stu s1 = {"Amio", 220307, 3.58};
    printf("%d", s1.roll);
}