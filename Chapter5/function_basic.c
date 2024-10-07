#include <stdio.h>
//function declaration/prototype
void printHello();
int main()
{
    printHello();
    printHello(); // function call
    printHello();
    return 0;
}

// function definition
void printHello(){
    printf("Hello!\n");
    printf("My name is Amio Sarkar\n");
}