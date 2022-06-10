#include <stdio.h>

int main(void)
{
    int a = 6, b = 56, c = 9;
    if (a > b && a > c)
    {
        printf("%d is the largest number", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest number", b);
    }
    else
        printf("%d is the largest number", c);
}