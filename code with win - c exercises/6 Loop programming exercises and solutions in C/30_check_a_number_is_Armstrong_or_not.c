#include <stdio.h>
#include <math.h>

int main()
{
    printf("*** Program to check whether a number is Armstrong number or not ***\n\n");
    /* What is a Armstrong number?
        
        An Armtrong number is a n digit number that is equal to the sum of the nth power of its digits
        
        For example-
                    6 = 6 ^ 1 = 6
                    371 = 3^3 + 7 ^ 3 + 1 ^ 3 = 371 */

    int originalNum, num, lastDigit, digits, sum = 0;

    // Input number form user
    printf("Enter any number to check Armstrong number:-\n");
    scanf("%d", &num);

    // Copy the value of num for processing
    originalNum = num;

    // find total digits in num
    digits = (int)log10(num) + 1;

    // Calculate sum of power of digits
    while (num > 0)
    {
        // Extract the last digit
        lastDigit = num % 10;

        // Conpute sum of power of last digit
        sum = sum + round(pow(lastDigit, digits));

        // Remove the last digit
        num /= 10;
    }

    // Check for Armstrong number
    if (originalNum == sum)
    {
        printf("%d is ARMSTRONG NUMBER\n", originalNum);
    }
    else
    {
        printf("%d is NOT A ARMSTRONG NUBMER\n", originalNum);
    }
    return 0;
}