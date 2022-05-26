#include <stdio.h>

int main()
{
    printf("*** Program to check whether a number is palindrome or not ***\n\n");
    /* Palindrome Number --> Palindrome number is such a number which when 
                             reversed is equal to the original nubmer.
        For Example- 121, 12321, 1991, etc... */

    int n, num, reverse = 0;

    printf("Enter any number to find its reverse\n");
    scanf("%d", &n);

    num = n;

    // Repeat the till 'num' becomes 0
    while (n != 0)
    {
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    }

    if (reverse == num)
    {
        printf("%d is palindrome number\n", num);
    }
    else
    {
        printf("%d is not a palindrome number\n", num);
    }
    return 0;
}