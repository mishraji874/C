#include <stdio.h>
int main()
{
    int arr[6] = {5, 4, 12, 7, 15, 9};
    int temp, n = 6;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}