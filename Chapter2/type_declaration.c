#include<stdio.h>
int main()
{
    /*Right way to declare*/
    int age = 21;
    int OldAge = age;
    int NewAge = OldAge + 2;
    printf("New age is %d\n", NewAge);
    int taka = 100, dollar;
    dollar = 115;
    printf("%d\n%d", taka, dollar);
    /*
    Wrong way and order to declare
    float pi = 3.1416;
    float area = pi * rad *rad;
    float rad = 5;
    */
    return 0;
}