#include <stdio.h>
int main()
{
    char str[100], ch;
    int count;
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to find its frequency:");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (ch == str[i])
        {
            count++;
        }
    }
    printf("Frequency of %c=%d", ch, count);
    return 0;
}