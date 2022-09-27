#include <stdio.h>
int sum()
{
    int n;
    if (n != 0)
    {
        return n + sum(n - 1);
    }
    else
    {
        return n;
    }
}
int main()
{
    int num;
    printf("Enter the numbers:\n");
    scanf("%d", &num);
    printf("Sum=%d", sum(num));
    return 0;
}