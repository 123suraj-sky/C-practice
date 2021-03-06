#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'M';
    int var2 = 'm';
    int var3 = '3';

    if (isupper(var1)) // checks whether the passed character is a uppercase character
    /* 
    Standard white-space characters are-
    ' '     (0x20)      space(SPC)
    '\t'    (0x09)      horizontal tab(TAB)
    '\n'    (0x0a)      newline(LF)
    '\v'    (0x0b)      vertical tab(VB)
    '\f'    (0x0c)      carriage return(CR)
    */
    {
        printf("var1 = |%c| is a uppercase character\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not a uppercase character\n", var1);
    }
    if (isupper(var2))
    {
        printf("var2 = |%c| is a uppercase character\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not a uppercase character\n", var2);
    }
    if (isupper(var3))
    {
        printf("var3 = |%c| is a uppercase character\n", var3);
    }
    else
    {
        printf("var3 = |%c| is not a uppercase character\n", var3);
    }

    return 0;
}