#include <stdio.h>

int main()
{
    printf("*** Programme to count number of digits in a number ***\n\n");
    long long num; /*In above programmes we used long long data type with %lld format specifier.
                     But we can also use long type with %ld format specifier if long long is not supported in any system */
    int count = 0;

    // Input from user
    printf("Enter any number here:\n");
    scanf("%lld", &num);

    if (num < 0)
    {
        num = -num; // Used to calculate number of digits of negative numbers also
    }

    // Run loop till num is greater than 0
    do
    {
        count++; // Increment digit count

        num /= 10; // Remove last digit of 'num'
    } while (num != 0);

    printf("Total digits: %d\n", count);

    return 0;
}