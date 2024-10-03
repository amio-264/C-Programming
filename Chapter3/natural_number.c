#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<1){
        printf("Enter a natural number");
    }
    else{
        printf("Natural number upto %d are:\n", n);
        for (int i = 1; i <= n;i++){
            printf("%d\n", i);
        }
       // printf("\n");
    }
    return 0;
}