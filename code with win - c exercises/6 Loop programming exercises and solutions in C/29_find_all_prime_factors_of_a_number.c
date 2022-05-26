#include <stdio.h>

int main(){
    printf("*** Program to find all prime factors of a nubmer ***\n\n");
    long long n, i, j, isPrime;
    printf("Enter any number:-\n");
    scanf("%lld", &n);

    if (n <= 1)
    {
        printf("Error!! Please enter any integer number greater than 1\nbecause there are no prime factors for negative numbers\n");
    }

    printf("All prime factors of %lld are:\n", n);

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
        if ((isPrime == 1) && (n % i == 0))
        {
            printf("%lld, ", i);
        }
    }
    // if(n % i == 0){
    //     printf("Prime factors of %lld are:-\n%lld, ", n, i);
    // }
    return 0;
}