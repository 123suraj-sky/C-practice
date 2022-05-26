#include <stdio.h>

int main()
{
    printf("*** Programme to print all alphabets from a to z ***\n    Using while loop\n\n");
    char ch = 'a';
    printf("a\n");
    while (ch < 'z')
    {
        ch++;
        printf("%c\n", ch);
    }

    return 0;
}