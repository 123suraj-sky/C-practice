#include <stdio.h>

int main()
{
    printf("*** Program to check whether a number is Prime number or not ***\n\n");
    int n;
    printf("Enter any number:-\n");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Error!! Please enter any integer number greater than 1\nbecause negative integers can not be prime\nBy the definition 'prime are integers greater than one with no positive divisors besides one and itself'\n");
    }

    int i = 2, isPrime = 1;
    /*  isPrime is used as flag variable
        If isPrime = 0, then number is composite
        else if isPrime = 1, then number is prime
        Initially We have assumed the number as prime i.e. isPrime = 1*/

    for (i; i <= n / 2; i++)
    {
        //Check divisibility of n
        if (n % i == 0)
        {
            // Set isPrime to 0 indicating it as compostie nubmer
            isPrime = 0;
            break;
        }
    }

    // If isPrime contains 1 then it is prime
    if (isPrime == 1 && n > 1)
    {
        printf("%d is prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}