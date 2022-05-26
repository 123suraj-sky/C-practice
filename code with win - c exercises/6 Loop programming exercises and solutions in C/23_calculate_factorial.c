#include <stdio.h>

int main()
{
    printf("** Program to calculate factorial of a number ***\n\n");
    int i = 1;
    int n;
    printf("Enter any number:-\n");
    scanf("%d", &n);

    long long factorial = 1;  // long long stores large values

    if (n < 0)
    {
        printf("Factorial of %d is -infinity because factorial of any negative integer is -infinity", n);
    }

    for (i; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is %lld\n", n, factorial);

    return 0;
}