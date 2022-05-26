#include <stdio.h>
#include <math.h>

int main()
{
    printf("*** Program to covert octal to decimal number system ***\n\n");

    long long octal, tempOctal, decimal;
    int rem, place;

    printf("Enter any octal number:\n");
    scanf("%lld", &octal);

    // Copy number to tempOctal for operating
    tempOctal = octal;

    decimal = 0;
    place = 0;

    // Covert octal to decimal
    while (tempOctal > 0)
    {
        // Extract the last digit of octal
        rem = tempOctal % 10;

        // Covert last octal digit to decimal
        decimal += pow(8, place) * rem;

        // Remove the last octal digit
        tempOctal /= 10;

        place++;
    }

    printf("Octal number is %lld\n", octal);
    printf("Decimal number is %lld\n", decimal);

    return 0;
}