#include <stdio.h>
int main()
{
    // // CASE 1
    // int age = 22;
    // int *ptr = &age;
    // printf("%p\n", ptr);
    // ptr++; // address incremented by 4 because the data type is integer
    // printf("%p\n", ptr);
    // ptr--; // address decremented by 4 and back to its original address
    // printf("%p\n", ptr);

    // CASE 2

    // float age = 22.0;
    // float *ptr = &age;
    // printf("%p\n", ptr);
    // ptr++;// address incremented by 4 
    // printf("%p\n", ptr);
    // ptr--; // address decremented by 4
    // printf("%p\n", ptr);

    // CASE 3

    char star = '*';
    char *ptr = &star;
    printf("%p\n", ptr);
    ptr++; // address incremented by 1
    printf("%p\n", ptr);
    ptr--; // address decremented by 1
    printf("%p\n", ptr);
    return 0;
}