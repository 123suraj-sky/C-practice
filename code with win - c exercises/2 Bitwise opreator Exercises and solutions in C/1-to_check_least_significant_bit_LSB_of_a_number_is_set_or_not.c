#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num & 1) //notes: checks if least significant bit is 0 or 1
        printf("LSB of %d is set (1)\n", num);
    else
        printf("LSB of %d is not set (0)\n", num);

    return 0;
}