#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 't';
    int var2 = '1';
    int var3 = ' ';

    // puts(" ");
    // puts("\t");
    // puts("\n");
    // puts("\v");
    // puts("\f");

    if (isupper(var1)) // checks whether the passed character is a white-space
    /* 
    Standard white-space characters are-
    ' '     (0x20)      space(SPC)
    '\t'    (0x09)      horizontal tab(TAB)
    '\n'    (0x0a)      newline(LF)
    '\v'    (0x0b)      vertical tab(VB)
    '\f'    (0x0c)      carriage return(CR)
    */
    {
        printf("var1 = |%c| is a white-space character\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not a white-space character\n", var1);
    }
    if (isupper(var2))
    {
        printf("var2 = |%c| is a white-space character\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not a white-space character\n", var2);
    }
    if (isupper(var3))
    {
        printf("var3 = |%c| is a white-space character\n", var3);
    }
    else
    {
        printf("var3 = |%c| is not a white-space character\n", var3);
    }

    return 0;
}