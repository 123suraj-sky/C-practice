#include <stdio.h>

int main()
{
    printf("*** Program to print all Perfect numbers between 1 to n ***\n\n");
    long long i, j, end, sum = 0;

    printf("Enter the value of n:-\n");
    scanf("%lld", &end);

    printf("All perfect numbers between 1 to %lld:\n", end);

    // Iterate from 1 to end
    for (i = 1; i <= end; i++)
    {
        sum = 0;

        // check whether the current number i is Perfect number or not
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        // If the current number i is Perfect number
        if (sum == i)
        {
            printf("%lld, ", i);
        }
    }
    return 0;
}