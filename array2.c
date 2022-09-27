#include <stdio.h>
void main()
{
    int i;
    float marks[5];
    float sum = 0.0, avg;
    printf("Enter the marks:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / 5;
    printf("sum=%f", sum);
    printf("\n average=%f", avg);
}