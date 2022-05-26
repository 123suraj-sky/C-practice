#include <stdio.h>

int main()
{
    printf("*** Program to convert decimal to binary number system ***\n\n");

    long long decimal, tempDecimal, binary;
    int rem, place = 1;

    binary = 0;

    // Input decimal number from user
    printf("Enter any decimal number:-\n");
    scanf("%lld", &decimal);

    // Copy decimal number for further calculation
    tempDecimal = decimal;

    // Decimal to binary conversion
    while (tempDecimal > 0)
    {
        rem = tempDecimal % 2;

        binary = (rem * place) + binary;

        tempDecimal /= 2;

        place *= 10;
    }

    printf("Decimal number = %lld\n", decimal);
    printf("Binary number = %lld\n", binary);
    return 0;
}