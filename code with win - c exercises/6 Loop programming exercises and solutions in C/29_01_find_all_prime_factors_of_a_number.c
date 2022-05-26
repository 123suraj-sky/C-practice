#include <stdio.h>

int main()
{
    printf("*** Program to find all prime factors of a nubmer ***\n\n");
    int i, j, num, isPrime;

    // Input from user
    printf("Enter any number to print Prime factors:-\n");
    scanf("%d", &num);

    printf("All prime factors of %d are:\n", num);

    // Find all prime factors
    for (i = 2; i <= num; i++)
    {
        // Check 'i' for factor of num
        if (num % i == 0)
        {
            // check 'i' for prime
            isPrime = 1;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            // If 'i' is prime number and factor of num
            if (isPrime == 1)
            {
                printf("%d, ", i);
            }
        }
    }
    return 0;
}