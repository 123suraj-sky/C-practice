#include <stdio.h>
#define BITS sizeof(int) * 8 //notes: Total bits requried to represent an integer
// #define BITS 32

//notes: Most significant bit of positive number is always 0 (in 2s complement) and negative number is 1

int main()
{
    int num, msb;

    printf("Enter any number: ");
    scanf("%d", &num);

    // move first bit of 1 to highest roder
    msb = 1 << (BITS - 1);

    // Perform bitwise AND with msb and num
    if (num & msb)
        printf("MSB of %d is set (1)\n", num);
    else
        printf("MSB of %d is not set (0)\n", num);

    //! sizeof operators
    //* printf("sizeof(int) = %d\n", sizeof(int));
    //* printf("sizeof(float) = %d\n", sizeof(float));
    //* printf("sizeof(char) = %d\n", sizeof(char));
    //* printf("sizeof(double) = %d\n", sizeof(double));
    //* printf("sizeof(long double) = %d\n", sizeof(long double));

    return 0;
}