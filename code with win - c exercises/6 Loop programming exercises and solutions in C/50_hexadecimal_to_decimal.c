#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    printf("*** Program to convert hexadecimal to decimal ***\n\n");

    char hex[17];
    long long decimal, place;
    int i = 0, val, len;

    decimal = 0;
    place = 1;

    printf("Enter any hexadecimal number:-\n");
    gets(hex);

    // Find the length of total number of hex digit
    len = strlen(hex);
    len--;

    // Iterate over each hex digit
    for (i = 0; hex[i] != '\0'; i++)
    {
        // find the decimal reprersentation of hex[i]
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            val = hex[i] - 48;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            val = hex[i] - 97 + 10;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }

    printf("Hexadecimal number is %s\n", hex);
    printf("Decimal number is %lld", decimal);
    return 0;
}