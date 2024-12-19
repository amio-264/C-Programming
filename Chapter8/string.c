#include <stdio.h>
void printString(char arr[]){
    for (int i = 0; arr[i] != '\0';i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
int main()
{
    char firstName[]={'A','m','i','o','\0'};
    char lastName[]="Sarkar";
    printString(firstName);
    printString(lastName);
    return 0;
}