#include <stdio.h>
#include <ctype.h>

int main()
{
    // toupper converts a given letter lowercase
    int i = 0;
    char c;
    char str[] = "I am Batman";

    while (str[i])
    {
        putchar(toupper(str[i]));
        i++;
    }
    printf("\n");

    return 0;
}