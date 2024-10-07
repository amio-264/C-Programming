#include <stdio.h>
void nomoshkar();
void hola();
int main()
{
    char ch;
    printf("Enter B for Bengali and S for spanish: ");
    scanf("%c", &ch);
    if (ch == 'B')
    {
        nomoshkar();
    }
    else
    {
        hola();
    }
    return 0;
}

void nomoshkar()
{
    printf("Nomoshkar!\n");
}
void hola()
{
    printf("Hola!\n");
}