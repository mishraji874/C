#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter the number whose multiplication table you want:\n");
    scanf("%d", &num);
    printf("Multiplication table of %d is as follows:\n", num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", i, num, num * i);
    }
    return 0;
}