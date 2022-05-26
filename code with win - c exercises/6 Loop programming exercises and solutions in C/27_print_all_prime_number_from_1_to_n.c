#include <stdio.h>

int main()
{
    printf("*** Program to print all Prime numbers between 1 to n ***\n\n");
    long long n, i, j, isPrime;
    printf("Enter any number between 1 to :-\n");
    scanf("%lld", &n);

    if (n <= 1)
    {
        printf("Error!! Please enter any integer number greater than 1\nbecause negative integers can not be prime\nBy the definition 'prime are integers greater than one with no positive divisors besides one and itself'\n");
    }

    printf("All prime numbers between 1 to %lld are:\n", n);

    // Find all prime numbers between 1 to n
    for (i = 2; i <= n; i++)
    {
        // Assume that the current number is prime
        isPrime = 1;

        // Check if the current number is prime
        for (j = 2; j <= i / 2; j++)
        {
            // If i is divisible by any number other than 1 and self then it is not prime nubmer
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        // If the number is prime then print
        if (isPrime == 1)
        {
            printf("%lld, ", i);
        }
    }
    return 0;
}