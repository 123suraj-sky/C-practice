#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'k';
    int var2 = '1';
    int var3 = '/';
    int var4 = ' ';

    if (isupper(var1)) // checks whether the passed character is a punctuation character
    // A punctuation character is any graphic character (as in isgraph) that is not alphanumeric(as in isalnum).
    {
        printf("var1 = |%c| is a punctuation character\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not a pucntuation character\n", var1);
    }
    if (isupper(var2))
    {
        printf("var2 = |%c| is a punctuation character\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not a pucntuation character\n", var2);
    }
    if (isupper(var3))
    {
        printf("var3 = |%c| is a punctuation character\n", var3);
    }
    else
    {
        printf("var3 = |%c| is not a pucntuation character\n", var3);
    }
    if (isupper(var4))
    {
        printf("var4 = |%c| is a punctuation character\n", var4);
    }
    else
    {
        printf("var4 = |%c| is not a pucntuation character\n", var4);
    }

    return 0;
}