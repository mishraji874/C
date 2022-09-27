#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    float marks;
} s[5];

int main()
{
    int i;
    printf("Enter the student's information:\n");
    for (int i = 0; i < 5; i++)
    {
        s[i].roll = i + 1;
        printf("For roll number %d,\n", s[i].roll);
        printf("Enter name:\n");
        scanf("%s", s[i].name);
        printf("Enter marks:\n");
        scanf("%.2f", &s[i].marks);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Roll number:%d\n", i + 1);
        printf("Name: \n");
        puts(s[i].name);
        printf("Marks:%.2f\n", s[i].marks);
    }
    return 0;
}