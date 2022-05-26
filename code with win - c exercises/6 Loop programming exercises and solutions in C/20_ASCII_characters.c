#include <stdio.h>

int main()
{
    printf("*** Program to print ASCII vales of all characters ***\n\n");

    int i;

    // Print ASCII values from 0 to 255
    for (i = 0; i <= 255; i++)
    {
        printf("ASCII value of character %c is %d\n", i, i);
    }
    return 0;
}