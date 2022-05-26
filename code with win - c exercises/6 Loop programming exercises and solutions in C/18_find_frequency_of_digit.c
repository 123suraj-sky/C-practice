#include <stdio.h>
#define BASE 10 // Constant

int main()
{
    printf("*** Program to find frequency of each digit in a given integer ***\n\n");
    long long num, n;
    int i, lastDigit;
    int freq[BASE];

    printf("Enter any number:-\n");
    scanf("%lld", &num);

    // Initialize frequency array with 0
    for (i = 0; i < BASE; i++)
    {
        freq[i] = 0;
    }

    // Copy the value of 'num' to 'n'
    n = num;

    // Run till 'n' is not equal to zero
    while (n != 0)
    {
        // Get last digit
        lastDigit = n % 10;

        // Remove last digit
        n /= 10;

        // Increment frequency array
        freq[lastDigit]++;
    }

    // Print frequency of each digit
    printf("Frequency of each digit in %lld is: \n", num);
    for (i = 0; i < BASE; i++)
    {
        printf("Frequency of %d is %d\n", i, freq[i]);
    }
    return 0;
}

/* 1) #define BASE 10 defines a constant with name BASE. Since there are 10 digits in decimal number system hence we have defined it as a constant variable
   2) We have declared num with long long data type and to access a long long We have used %lld format specifier
        However some compiler does not long long type. In that case we can also use long or int type
   3) In statement n /= 10; We have used shorthand assignment operator which is equivalent to n = n / 10;
   4) The increment statement freq[lastDigit]++; is equivalent to freq[lastDigit] = freq[lastDigit] + 1; */