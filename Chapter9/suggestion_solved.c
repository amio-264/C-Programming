#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[50];
    float marks;
    char dob[20];
    char phone[20];
};
int main()
{
    struct student s[100];
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 100 || n <= 0)
    {
        printf("Invalid number of students. Enter a number from 1 to 100.");
    }
    // Input details for students
    for (int i = 0; i < n; i++)
    {
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        printf("Enter Date of birth: ");
        scanf("%s", s[i].dob);
        printf("Enter Phone Number: ");
        scanf("%s", s[i].phone);
    }
    printf("The details of the students:\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %f\n", s[i].marks);
        printf("Date of birth: %s\n", s[i].dob);
        printf("Phone No: %s\n", s[i].phone);
    }
    return 0;
}