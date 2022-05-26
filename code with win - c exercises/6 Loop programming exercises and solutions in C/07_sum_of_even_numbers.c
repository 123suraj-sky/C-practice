#include <stdio.h>

int main()
{
    printf("*** Programme to find sum of all even numbers between 1 to n ***\n\n");
    int i = 0, n, sum = 0;

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for (i; i <= n; i+=2)
    {
        sum += i;
    }

    printf("Sum of all even numbers between 1 and %d even natural numbers is %d\n", n, sum);
    return 0;
}