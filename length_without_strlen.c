#include <stdio.h>
int main()
{
    char str[] = "Programming is fun";
    int i;
    for (i = 0; str[i] != '\0'; i++);
    printf("Length of the string:%d", i);
    return 0;
}