#include <stdio.h>
#include <string.h>

int main()
{
    char s[250];
    printf("Enter the string:\n");
    gets(s);
    // printf("strlen(s) is %d\n", strlen(s));
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
            s[i] = '_';
    }
    puts(s);

    return 0;
}