#include <stdio.h>
int main()
{
    int n, reverse, remainder, original;
    printf("Enter the number:\n");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    if (original = reverse)
    {
        printf("%d is the palindrome", original);
    }
    else
    {
        printf("%d is not the palindome", original);
    }
    return 0;
}