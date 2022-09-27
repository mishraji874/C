#include <stdio.h>
int main()
{
    int n, reverse, remainder;
    printf("Enter the number:\n");
    scanf("%d", &n);
    while (n != 0)
    {
        /* code */
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number=%d", reverse);
    return 0;
}