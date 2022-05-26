/* What is two's complement?
    Two's complement of an N-bit number is defined as the complement with respect to 2^N.
    It is the result of subtracting the number form which in binary is one followed by N zeroes
    
    In simple words two's complement is defined as sum of ones complement of a binary number and 1
    
        01101110 <-- Original binary value
        10010001 <-- 1's complement
        
        10010001
        +      1
        10010010 <-- 2's complement */

#include <stdio.h>
#define SIZE 8

int main()
{
    printf("*** Program to find two's complement of a binary number ***\n\n");

    char binary[SIZE + 1], onesComp[SIZE + 1], twoscomp[SIZE + 1];
    int i, carry = 1;

    printf("Enter %d bit binary value:\n", SIZE); // Must enter 8 digit in 0 and 1

    // Input 8-bit binary string
    gets(binary);

    // Find ones complement of the binary number
    for (i = 0; i < SIZE; i++)
    {
        if (binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if (binary[i] == '0')
        {
            onesComp[i] = '1';
        }
    }
    onesComp[SIZE] = '\0';

    // Add 1 to the ones complement
    for (i = SIZE - 1; i >= 0; i--)
    {
        if (onesComp[i] == '1' && carry == 1)
        {
            twoscomp[i] = '0';
        }
        else if (onesComp[i] == '0' && carry == 1)
        {
            twoscomp[i] = '1';
            carry = 0;
        }
        else
        {
            twoscomp[i] = onesComp[i];
        }
    }
    twoscomp[SIZE] = '\0';

    printf("Original binary = %s\n", binary);
    printf("Ones complement = %s\n", onesComp);
    printf("Twos complement = %s\n", twoscomp);

    return 0;
}