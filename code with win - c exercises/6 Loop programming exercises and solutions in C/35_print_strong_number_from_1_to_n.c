#include <stdio.h>

int main()
{
    printf("*** Program to print all Strong numbers between 1 to n ***\n\n");
    int i, j, cur, lastDigit, end;
    long long fact, sum;

    printf("Enter the value of n:-\n");
    scanf("%d", &end);

    printf("All Strong numbers between 1 to %d are:\n", end);

    // Iterate from 1 to end
    for (i = 1; i <= end; i++)
    {
        // Number to check for strong number
        cur = i;

        sum = 0;

        // Find the sum of factorial of digits
        while (cur > 0)
        {
            fact = 1ll;
            lastDigit = cur % 10;

            // Find factorial of last digit of current num
            for (j = 1; j <= lastDigit; j++)
            {
                fact *= j;
            }

            sum += fact;

            cur /= 10;
        }

        // Print 'i' if it is strong number
        if (sum == i)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}