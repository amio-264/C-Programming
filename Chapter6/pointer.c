#include <stdio.h>
int main()
{
    // declare a variable and assign a value
    int age = 21;
    // declare another variable which can contain the memory address of previous variable
    int *ptr = &age; // here "*" denotes value of address and "&" denotes address of value
    // declare a new variable which stores the pointer and print there after
    int _age = *ptr;
    printf("%d", _age);
    return 0;
}