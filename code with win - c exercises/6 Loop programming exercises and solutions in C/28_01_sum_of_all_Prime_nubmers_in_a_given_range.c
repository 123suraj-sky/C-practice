#include <stdio.h>

int main()
{
    printf("*** Program to find sum of all Prime numbers between a given range ***\n\n");
    long long i, j, start, end;
    long long isPrime;
    long long sum = 0;

    // Input from user
    printf("Enter lower limit:-\n");
    scanf("%lld", &start);
    printf("Enter upper limit:-\n");
    scanf("%lld", &end);

    // printf("All prime numbers between %lld to %lld are:\n", start, end);

    // Make sure that lower limit does not go below 2
    // Since 2 is first prime number
    if (start < 2)
    {
        start = 2;
    }
    // Find all prime numbers between 1 to n
    for (i = start; i <= end; i++)
    {
        // Assume that the current number is prime
        isPrime = 1;

        // Check if the current number i is prime or not
        for (j = 2; j <= i / 2; j++)
        {
            // If i is divisible by any number other than 1 and self
            // then it is not prime number
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        // If the number is prime then print
        if (isPrime == 1)
        {
            // printf("%lld, ", i);
            sum += i;
        }
    }
    printf("Sum of prime numbers between %lld and %lld is %lld\n", start, end, sum);
    return 0;
}