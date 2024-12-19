#include <stdio.h>
#include <string.h>
int main()
{
    char firstStr[100] = "Amio ";
    char secStr[] = "Sarkar";
    strcat(firstStr, secStr);
    puts(firstStr);
    return 0;
}