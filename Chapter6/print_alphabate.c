#include <stdio.h>
char printAlphabet(char *ch);
int main()
{
    char ch = 'A';
    printAlphabet(&ch);
    return 0;
}
char printAlphabet(char *ch){
    for (int i = 1; i < 26; i++){
        printf("%c ", *ch);
        (*ch)++;
    }
}