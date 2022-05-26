#include <stdio.h>

int main()
{
    printf("*** Program to convert octel to binary number system ***\n\n");

    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long octal, tempOctal, binary, place;
    int rem;

    printf("Enter any Octal number:-\n");
    scanf("%lld", &octal);

    // copy variable for execution
    tempOctal = octal;

    binary = 0;
    place = 1;

    // Convert octal to binary
    while (tempOctal > 0)
    {
        // Extract the last digit of octal
        rem = tempOctal % 10;

        // Get the binary equivalent of octal digit add it to the binary variable
        binary = (OCTALVALUES[rem] * place) + binary;

        // Remove the last octal digit
        tempOctal /= 10;

        // Increase the place value
        place *= 1000;
    }

    printf("Octal number = %lld\n", octal);
    printf("Binary number = %lld", binary);

    return 0;
}