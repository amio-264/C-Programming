// #include <stdio.h>
// int countLength(char arr[]){
//     int count = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count - 1;
// }
// int main()
// {
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("Length is %d", countLength(name));
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    fgets(name, sizeof(name), stdin);
    int length = strlen(name);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (name[i] != ' ' && name[i] != '\n')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}