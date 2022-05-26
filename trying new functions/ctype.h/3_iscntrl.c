#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0, j = 0;
    char str1[] = "all \a about \t programming";
    char str2[] = "tutorials \n point";

    // Prints string till control character \a
    while (!iscntrl(str1[i])) // iscntrl() checks if the passed character is a control character
    {
        putchar(str1[i]);
        i++;
    }

    // Prints string till control character \n
    while (!iscntrl(str2[j]))
    {
        putchar(str2[j]);
        j++;
    }

    printf("\n");
    return 0;
}