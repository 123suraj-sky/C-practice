#include <stdio.h>
#include <math.h>
void sum(int n, int k);

int main()
{
    printf("\n*** Program to find the power 'k' of first 'n' natural number***\n\n");
    int n; // n for natural number
    int k; // k for the power of the series

    // Taking input of the natural number n
    printf("Enter a natural number to whose sum you want to find: ");
    scanf("%d", &n);
    printf("Enter the power of whose sum you want to find: ");
    scanf("%d", &k);

    sum(n, k); // Function call to find the required sum
    return 0;
}

// finding the sum
void sum(int n, int k)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, k);
    }
    printf("Sum of cube of first %d natural number is %d\n", n, sum);
}