#include <stdio.h>

int main(void)
{
    char c;
    int lower_case, upper_case;

    printf("Enter letter: ");
    scanf("%c", &c);
    lower_case = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upper_case = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'C');

    if (lower_case || upper_case)
    {
        printf("%c is vowel", c);
    }
    else
    {
        printf("%c is consonant", c);
    }
    return (0);
}