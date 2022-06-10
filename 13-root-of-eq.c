#include <stdio.h>
#include <math.h>
int main(void)
{
    int a = 5, b = 6, c = 1;
    double res1, res2;

    res1 = (-b + pow(((b * b) - (4 * a * c)), 0.5)) / (2 * a);
    res2 = (-b - pow(((b * b) - (4 * a * c)), 0.5)) / (2 * a);
    printf("%.1f %.1f", res1, res2);
    return (0);
}