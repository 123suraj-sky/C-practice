#include <stdio.h>

int main()
{
    int n = 9, right, left;

    //! Right Shift Operator --> Divide the number by 2 and taking only integer part
    right = n >> 1;
    printf("right is %d\n", right);
    //* Example
    // right = 4 --> 100
    // right = 2 --> 010

    //! Left Shift Operator --> Multiply the number by 2
    left = n << 1;
    printf("left is %d\n", left);
    //* Example
    // left = 4 --> 0100
    // left = 8 --> 1000

    return 0;
}