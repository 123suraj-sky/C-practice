#include <stdio.h>
#include <math.h>

int main()
{
    printf("*** Program to print all Armstrong numbers between 1 to n ***\n\n");
    int num, lastdigit, digits, sum, i, end;

    printf("Enter the value of n\n");
    scanf("%d", &end);

    printf("Armstrong number between 1 to %d are: \n", end);

    for (i = 1; i <= end; i++)
    {
        sum = 0;

        // Copy the value of num for processing
        num = i;

        // find total digits in num
        digits = (int)log10(num) + 1;

        // Calculate sum of power of digits
        while (num > 0)
        {
            // Ectract last digit
            lastdigit = num % 10;

            // Find sum of power of digits
            // User ceil() function to overcome any rounding errors by pow()
            sum = sum + ceil(pow(lastdigit, digits));

            // Remove the last digit
            num /= 10;
        }

        // Check for Armstorng number
        if (i == sum)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}