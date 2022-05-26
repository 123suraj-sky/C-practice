#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
    int num, zeros, ones;

    printf("Enter any number: ");
    scanf("%d", &num);

    zeros = 0;
    ones = 0;

    for (int i = 0; i < INT_SIZE; i++)
    {
        // if LSB is set then increment ones otherwise zeros
        if (num & 1)
            ones++;
        else
            zeros++;

        // Right shift bits of num to one position
        num >>= 1; //* num = num >> 1;
    }

    printf("Total zero bit is %d\n", zeros);
    printf("Total one bit is %d\n", ones);

    return 0;
}