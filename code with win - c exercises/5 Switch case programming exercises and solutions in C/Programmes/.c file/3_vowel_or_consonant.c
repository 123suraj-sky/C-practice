#include <stdio.h>

int main()
{
    printf("*** Programme to check whether an alphabet is vowel or consonant ***\n\n");

    char c;
    printf("Enter the alphabet here:-\n");
    scanf("%c", &c);

    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("It is vowel\n");
        break;

    default:
        printf("It is consonant\n");
    }

    return 0;
}