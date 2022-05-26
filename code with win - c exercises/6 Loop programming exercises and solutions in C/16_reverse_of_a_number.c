#include <stdio.h>

int main()
{
    printf("*** Program to enter a number and print its reverse ***\n\n");
    int num, reverse = 0;

    printf("Enter any number to find its reverse\n");
    scanf("%d", &num);

    // Repeat the till 'num' becomes 0
    while (num != 0)
    {
        /* Increase place value of reverse and
           add last digit to reverse */

        reverse = (reverse * 10) + (num % 10);

        // Remove last digit from 'num'
        num /= 10;
        // In last step num becomes zero
    }

    printf("Reverse number is %d", reverse);
    return 0;
}