#include <stdio.h>

int main()
{
    printf("*** Program to print Strong number in a given range ***\n\n");

    int i, j, cur, lastDigit, start, end;
    long long fact, sum;

    printf("Enter lower limit:-\n");
    scanf("%d", &start);
    printf("Enter upper limit:-\n");
    scanf("%d", &end);

    printf("All Strong numbers between %d to %d are:-\n", start, end);

    // Iterate from start to end
    for (i = start; i <= end; i++)
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