#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

//notes: Lowest Order Set Bit
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//notes: 1) Lowest order or first set bit of any number is the first bit set starting from left to right.
//notes: 2) Lowest order set bit of any odd number is 0 since first bit of any odd number is always set

int main()
{
    int num, order;

    printf("Enter any number: ");
    scanf("%d", &num);

    //* Initially set the order to max size of integer
    order = INT_SIZE - 1;

    for (int i = 0; i < INT_SIZE; i++)
        // If curret bit is set
        if ((num >> i) & 1)
        {
            order = i;
            break;
        }

    printf("Lowest order set bit in %d is %d\n", num, order);

    return 0;
}