#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
    int num, count = 0, num_temp;

    printf("Enter any number: ");
    scanf("%d", &num);

    num_temp = num;

    //! Method 1
    // for (int i = 0; i < INT_SIZE; i++)
    // {
    //     if ((num >> i) & 1)
    //         break;
    //     count++;
    // }

    //! Method 2
    while (!(num & 1))
    {
        count++;
        num >>= 1; //notes: num >>= 1 --> num = num >> 1
    }

    printf("Total number of trailing zeros in %d is %d\n", num_temp, count);

    return 0;
}