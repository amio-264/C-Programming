//we use fgets instead of scanf coz scanf can't take the input after a space
//we use puts instead of printf
#include <stdio.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    puts(str);
    return 0;
}