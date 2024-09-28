#include <stdio.h>
int main()
{
    printf("%d\n", 4 == 4); // Equal that's why it will return 1
    printf("%d\n", 4 == 3); // Not equal that's why it will return 0
    printf("%d\n", 4 > 3);  // 4 is greater than 3 that's why it will return 1
    printf("%d\n", 4 > 4);  // 4 is not greater than 3 that's why it will return 0
    printf("%d\n", 4 >= 4); // Its greater or equal that's why it will return 1
    printf("%d\n", 4 != 3); // Expression is true that's why it will return 1
    printf("%d\n", 4 != 4); //Expression isn't true that's why it will return 0
    return 0;
}