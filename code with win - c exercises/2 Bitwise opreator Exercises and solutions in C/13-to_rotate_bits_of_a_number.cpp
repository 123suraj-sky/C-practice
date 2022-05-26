#include <iostream>
using namespace std;

#define INT_BITS 32

class rotateBits
{
public:
    /*Function to left rotate number by rotation bits*/
    int leftRotate(int number, unsigned int rotation)
    {
        /* In number<<rotation, last rotation bits are 0. To
	put first 3 bits of number at
	last, do bitwise or of number<<rotation
	with number >>(INT_BITS - rotation) */
        return (number << rotation) | (number >> (INT_BITS - rotation));
    }

    /*Function to right rotate number by rotation bits*/
    int rightRotate(int number, unsigned int rotation)
    {
        /* In number>>rotation, first rotation bits are 0.
	To put last 3 bits of at
	first, do bitwise or of number>>rotation
	with number <<(INT_BITS - rotation) */
        return (number >> rotation) | (number << (INT_BITS - rotation));
    }
};

int main()
{
    rotateBits num;
    int number, rotation;

    cout << "Enter a number: ";
    cin >> number;
    cout << "For how much bit you want to rotate the number: ";
    cin >> rotation;

    cout << "\nLeft Rotation of " << number << " by " << rotation << " is " << num.leftRotate(number, rotation) << endl;
    cout << "Right Rotation of " << number << " by " << rotation << " is " << num.rightRotate(number, rotation) << endl;
}