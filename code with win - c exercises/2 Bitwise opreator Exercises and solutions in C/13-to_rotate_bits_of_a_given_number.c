#include <stdio.h>
#define INT_BITS 32

//* Function to left rotate number by rotation bits
int leftRotate(int number, unsigned int rotation)
{
    /* In number<<rotation, last rotation bits are 0. To put first 3 bits of number at
	last, do bitwise or of number<<rotation with number >>(INT_BITS - rotation) */
    return (number << rotation) | (number >> (INT_BITS - rotation));
}

//* Function to right rotate number by rotation bits
int rightRotate(int number, unsigned int rotation)
{
    /* In number>>rotation, first rotation bits are 0. To put last 3 bits of at
	first, do bitwise or of number>>rotation with number <<(INT_BITS - rotation) */
    return (number >> rotation) | (number << (INT_BITS - rotation));
}

int main()
{
    int number, rotation;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("For how much bit you want to rotate the number: ");
    scanf("%d", &rotation);

    printf("Left Rotation of %d by %d is %d\n", number, rotation, leftRotate(number, rotation));
    printf("Right Rotation of %d by %d is %d\n", number, rotation, rightRotate(number, rotation));
}