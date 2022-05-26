#include <stdio.h>

int main()
{
    printf("*** Programme to print sum of natural numbers from 1 to n ***\n\n");
    int i = 1, n, sum = 0;

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for (i; i <= n; i ++)
    {
        sum += i;
    }

    printf("Sum of first %d natural number is %d\n", n, sum);
    return 0;
}