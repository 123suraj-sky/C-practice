#include <stdio.h>

int main()
{
    printf("*** Programme to check whether an alphabet is vowel or not ***\n\n");
    char v, c;
    v = 'a', 'e', 'i', 'o', 'u';
    char z;
    z = 'A', 'E', 'I', 'O', 'U';
    printf("Enter an alphabet\n");
    scanf("%c", &c);

    if (c == v)
    {
        printf("%c is vowel\n", c);
    }
    else if (c == z){
        printf("%c is vowel\n", c);
    }
    else
    {
        printf("%c is consonant\n", c);
    }
    return 0;
}