#include <stdio.h>
void printHello(int count);
int main()
{
    printHello(5); //Argument
    return 0;
}
// recursive function
void printHello(int count){ //Parameter
    if(count==0){
        return;
    }
    printf("Hello World!\n");
    printHello(count - 1); // function calls itself that's why the statement "count-1" is used
}