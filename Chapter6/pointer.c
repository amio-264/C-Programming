#include <stdio.h>
int main()
{
    // declare a variable and assign a value
    int age = 21;
    // declare another variable which can contain the memory address of previous variable
    int *ptr = &age; // here "*" denotes value of address and "&" denotes address of value
    
    // declare a new variable which stores the pointer and print there after
    int _age = *ptr;
    printf("%d\n", _age);


    //declare pointer
    int a; // int *ptr;
    char b; // char *ptr
    float c; //float *ptr


    //format specifier of pointer

    //printing address

    printf("%p\n", &age); //printing the memory address of age variable
    printf("%p\n", ptr); // printing the memory address of stored pointer/age 7th line
    printf("%u\n", &age); // printing memory address as unsigned int data
    printf("%p\n", &ptr); // printing the memory address of pointer

    //printing value
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    return 0;
}