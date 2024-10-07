#include <stdio.h>
// function declaration/prototype
void printHello();
void printGoodBye();

int main()
{
    printHello(); // function call
    printGoodBye();
    return 0;
}

// function definition
void printHello()
{
    printf("Hello!\n");
    printf("My name is Amio Sarkar.\n");
}

void printGoodBye()
{
    printf("Good bye!\n");
}