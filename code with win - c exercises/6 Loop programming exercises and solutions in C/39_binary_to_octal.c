#include <stdio.h>

int main()
{
    printf("*** Program to convert Binary to Octal number system ***\n\n");

    for (int z = 1; z <= 99999; z++)
    {
        int octalConstant[] = {0, 1, 10, 11, 100, 101, 110, 111};

        long long binary, octal, tempBinary;
        int digit, place, i;

        octal = 0;
        place = 1;

        // Input binary number from user
        printf("Enter any binary number:\n", z);
        scanf("%lld", &binary);

        if (binary < 0) // binary is never negative
        {
            printf("Invalid input!!\n");
        }
        else
        {
            // Copy original binary value to temp varaible
            tempBinary = binary;

            while (tempBinary != 0)
            {
                // Extract last three digit of binary
                digit = tempBinary % 1000;

                // Find local equivalent of 3 digit binary
                for (i = 0; i < 8; i++)
                {
                    if (octalConstant[i] == digit)
                    {

                        // INcrease the place value of octal and add the previous octal value
                        octal = (i * place) + octal;
                        break;
                    }
                }

                // Remove the last three digit of binary
                tempBinary /= 1000;

                // Increase the place value
                place *= 10;
            }

            printf("Original bianry number = %lld\n", binary);
            printf("Octal number = %lld\n\n\n", octal);
        }
    }

    return 0;
}