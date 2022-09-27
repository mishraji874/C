#include <stdio.h>
int main()
{
    char line[1000];
    int vowels, consonant, digit, space;
    vowels = consonant = digit = space = 0;
    printf("Enter a line:\n");
    fgets(line, sizeof(line), stdin);
    for (int i = 0; line[i] != '\n'; i++)
    {
        line[i] = tolower(line[i]);
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
        {
            vowels++;
        }
        else if (line[i] >= 'a' && line[i] <= 'z')
        {
            consonant++;
        }
        else if (line[i] >= '0' && line[i] <= '9')
        {
            digit++;
        }
        else if (line[i] == ' ')
        {
            space++;
        }
    }
    printf("Vowels:%d", vowels);
    printf("\nConsonant:%d", consonant);
    printf("\nDigit:%d", digit);
    printf("\nSpace:%d", space);
    return 0;
}