#include <stdio.h>
#include <math.h>

int main()
{
    printf("*** Program to print all Armstrong numbers in a given range ***\n\n");
    int num, lastDigit, digits, sum, i;
    int start, end;

    // Input lower and upper limit
    printf("Enter lower limit:\n");
    scanf("%d", &start);
    printf("Enter upper limit:\n");
    scanf("%d", &end);

    printf("Armstrong number between %d to %d are: \n", start, end);

    for (i = start; i <= end; i++)
    {
        sum = 0;

        // Copy the value of num for procesing
        num = i;

        // Find total digits in num
        digits = (int)log10(num) + 1;

        // Calculate sum of power of digits
        while (num > 0)
        {
            // Extract the last digit
            lastDigit = num % 10;

            // Fidn sum of power of digits
            // Use ceil() function to overcome any rounding errors by pow()
            sum = sum + ceil(pow(lastDigit, digits));

            // Remove the last digit
            num /= 10;
        }

        // Check for Armstrong number
        if (i == sum)
        {
            printf("%d, ", i);
        }
        
    }
    return 0;
}