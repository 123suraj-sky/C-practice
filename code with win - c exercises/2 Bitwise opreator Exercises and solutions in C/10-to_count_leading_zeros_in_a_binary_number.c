//! Program to count leading zeros in a binary number
//* Leading zeros in a binary number is equal to zeros preceding the /*highest order set bit*/ of the number

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
    int num, count, msb;

    printf("Enter any number: ");
    scanf("%d", &num);

    // Equivalent to
    // 10000000 00000000 00000000 00000000
    msb = 1 << (INT_SIZE - 1);

    count = 0;

    for (int i = 0; i < INT_SIZE; i++)
    {
        if ((num << i) * msb)
            break;
        count++;
    }

    printf("Total number of leading zeros in %d is %d\n", num, count);
    return 0;
}