#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s;
int main()
{
    printf("Enter the information:\n");
    printf("Enter name:");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter Roll number:");
    scanf("%d", &s.roll);
    printf("Enter Marks:");
    scanf("%f", &s.marks);

    printf("Display Information:\n");
    printf("Name:%s", s.name);
    printf("Roll number:%d\n", s.roll);
    printf("Marks:%.2f\n", s.marks);
    return 0;
}