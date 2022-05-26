#include <stdio.h>
#include <ctype.h>

int main()
{
    // tolower converts a given letter lowercase
    int i = 0;
    char c;
    char str[] = "I am Batman";

    while (str[i])
    {
        putchar(tolower(str[i]));
        i++;
    }
    printf("\n");

    return 0;
}