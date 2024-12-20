#include <stdio.h>
struct address{
    int house;
    int block;
    char state[100];
    char city[100];
};
void printAdd(struct address add) {
    printf("%d, %d , %s , %s\n",add.house,add.block,add.state,add.city);
}
int main()
{
    struct address add[5];
    printf("Enter address of person 1: ");
    scanf("%d", &add[0].house);
    scanf("%d", &add[0].block);
    scanf("%s", add[0].state);
    scanf("%s", add[0].city);
    printf("Enter address of person 2: ");
    scanf("%d", &add[1].house);
    scanf("%d", &add[1].block);
    scanf("%s", add[1].state);
    scanf("%s", add[1].city);
    printf("Enter address of person 3: ");
    scanf("%d", &add[2].house);
    scanf("%d", &add[2].block);
    scanf("%s", add[2].state);
    scanf("%s", add[2].city);
    printf("Enter address of person 4: ");
    scanf("%d", &add[3].house);
    scanf("%d", &add[3].block);
    scanf("%s", add[3].state);
    scanf("%s", add[3].city);
    printf("Enter address of person 5: ");
    scanf("%d", &add[4].house);
    scanf("%d", &add[4].block);
    scanf("%s", add[4].state);
    scanf("%s", add[4].city);
    printAdd(add[0]);
    printAdd(add[1]);
    printAdd(add[2]);
    printAdd(add[3]);
    printAdd(add[4]);
    return 0;
}