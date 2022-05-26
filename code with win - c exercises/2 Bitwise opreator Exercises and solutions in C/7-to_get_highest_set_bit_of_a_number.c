#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 //! Integer size in bits

//notes: Highest Order set bit
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//notes: 1) Highest position of a set bit from left to right in a number is said to be highest order set bit of that number.
//notes: 2) Highest order set bit of any negative integers is 31 (for 32 bit signed integer).
//notes: 3) Since, order set bit of any negative number is its MSB

int main()
{
    int num, order = -1;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = 0; i < INT_SIZE; i++)
    {
        // if current bit is set
        if ((num >> i) & 1)
            order = i;
    }

    if (order != -1)
        printf("Highest order set bit in %d is %d\n", num, order);
    else
        printf("0 has no set bits\n");

    return 0;
}
// 22/2 = 11 ---- 0
// 11/2 = 5  ---- 1
// 5/2  = 2  ---- 1
// 2/2  = 1  ---- 0
// 10110
// 43210
// 16 + 4 + 2 = 22