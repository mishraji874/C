#include <stdio.h>
void disp(int *n);
void main()
{
    int a[] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i <= 4; i++)
    {
        disp(&a[i]);
    }
}
void disp(int *n)
{
    printf("%d\t", *n);
}