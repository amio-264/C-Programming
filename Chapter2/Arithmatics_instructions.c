/*
Operator Precedence
*,/,%
+,-
=
Associativity(for same precendence)
left to Right calculation
*/
#include<stdio.h>
int main()
{
    int x, y, z, a, b, c, d;
    printf("X = %d\n", x = 4 + 9 * 10); //4+90
    printf("Y = %d\n", y = 4 * 3 / 6 * 2); //associativity rule((12/6)*2)
    printf("Z = %d\n", z = 5 + 2 / 2 * 3); //5+((2/2)*3)
    printf("A = %d\n", a = 5 * 2 - 2 * 3); //10-6
    printf("B = %d\n", b = 5 * 2 / 2 * 3); //(10/2)*3
    printf("C = %d\n", c = 5 *(2 / 2)* 3); //5*1*3
    printf("D = %d\n", d = 5 - 2 / 2 * 3); //5+(1*3)
    return 0;
}