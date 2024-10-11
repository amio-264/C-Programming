#include <stdio.h>
int main()
{
    int age[5];
    int *ptr = &age;
    // Input
    for (int i = 0; i < 5; i++){
        printf("%d index : ", i);
        scanf("%d", &age[i]); // Or, scanf("%d",(ptr+i));
    }
    // Output
    for (int i = 0; i < 5; i++){
        printf("%d index %d\n", i, age[i]); // Or, printf("%d index %d\n",i,*(ptr+i));
    }
        return 0;
}