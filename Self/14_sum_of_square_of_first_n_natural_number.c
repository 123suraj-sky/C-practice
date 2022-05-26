#include <stdio.h>
#include <math.h>
void sum(int n);

int main()
{
    printf("\n*** Program to find the sum of square of first n natural number***\n\n");
    int n; // n for natural number

    // Taking input of the natural number n
    printf("Enter a natural number to whose sum you want to find: ");
    scanf("%d", &n);

    sum(n); // Function call to find the required sum
    return 0;
}

// finding the sum
void sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, 2);
    }
    printf("Sum of square of first %d natural number is %d\n", n, sum);
}