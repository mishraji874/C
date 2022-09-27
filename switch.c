#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Sum is:%d", a + b);
        break;
    case 2:
        printf("SUbtarction is:%d", a - b);
        break;
    case 3:
        printf("Multiplication is:%d", a * b);
        break;
    case 4:
        printf("Division is:%d", a / b);
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}