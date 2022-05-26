#include <stdio.h>

int main()
{
    // a = 5 (00000101) , b  = 9 (00001001)
    unsigned char a = 5, b = 9;

    printf("a = %d, b = %d\n", a, b);

    // The result is  00000001
    printf("a&b = %d\n", a & b); // bitwise AND

    // The result is 00001100
    printf("a^b = %d\n", a ^ b); // bitwise XOR --> Y = (A + B) . (A' + B') = AB' + A'B

    // Truth Table of XOR --> result is zero when both are zero or both are one
    // |-----------|
    // | A | B | Y |
    // |-----------|
    // | 0 | 0 | 0 |
    // | 0 | 1 | 1 |
    // | 1 | 0 | 1 |
    // | 1 | 1 | 0 |
    // |-----------|


    // The result is 11111010
    printf("~a = %d\n", ~a); // bitwise NOT

    // The result is 00010010
    printf("b<<1 = %d\n", b << 1); // bitwise Left shift

    // The result is 00000100
    printf("b>>1 = %d\n", b >> 1); // bitwise Right shift

    return 0;
}