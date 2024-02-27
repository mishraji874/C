// By Aditiya Mishra, 6/12/2022.....11:29 PM
#include <stdio.h>
void main()
{
    int a = 10, b = 9;
    int *p, *q;
    p = &a; // p has the address of a,*p gives the value of a
    q = &b; // q has the address of b, *q gives the value of b
    printf("Value of a=%d\n", a);
    printf("Value of a=%d\n", *p);
}