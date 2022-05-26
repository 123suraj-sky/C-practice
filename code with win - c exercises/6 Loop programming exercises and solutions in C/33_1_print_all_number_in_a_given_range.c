#include <stdio.h>

int main()
{
    printf("*** Program to print all Perfect numbers in a given range ***\n\n");
    int i, j, start, end, sum;

    printf("Enter lower limit:-\n");
    scanf("%d", &start);
    printf("Enter upper limit:-\n");
    scanf("%d", &end);

    printf("All Perfect numbers between %d to %d are:\n", start, end);

    // Iterate form start to end
    for(i = start; i <= end; i++)
    {
        sum = 0;

        // Check whether the current number i is Perfect number or not
        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }

        // If the current number i is Perfect number
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}