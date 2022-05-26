#include <stdio.h>

int main()
{
    printf("*** Programme to print all alphabets from a to z ***\n    Using while loop\n\n");
    int i = 96;
    while (i < 122)
    {
        i++;
        printf("%c\n", i);
    }
    return 0;
}