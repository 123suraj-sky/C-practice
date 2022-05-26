#include <stdio.h>
#include <math.h>

#define BASE 2

int main()
{
    printf("*** Program to convert Binary to Decimal number system ***\n\n");

    for (int z = 1; z < 99999; z++) // Asks 99999 times to enter any binary number
    {
        long long binary, decimal = 0, tempBinary;
        int N = 0;

        printf("Enter any binary number:\n", z);
        scanf("%lld", &binary);

        tempBinary = binary;

        while (tempBinary != 0)
        {
            // If current bianry digit is 1
            if (tempBinary % 10 == 1)
            {
                decimal += pow(BASE, N);
            }

            N++;
            tempBinary /= 10;
        }

        printf("Binary number = %lld\n", binary);
        printf("Decimal number = %lld\n\n", decimal);
    }

    return 0;
}