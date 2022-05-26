#include <stdio.h>
#include <string.h>

int main()
{
    printf("*** Program to convert decimal to binary number system\
 (for more than 18 bits) ***\n\n");

    long long decimal, tempDecimal;
    char binary[100];
    int index = 0;

    printf("Enter any decimal value:-\n");
    scanf("%lld", &decimal);

    // Copy decimal value to temp variable
    tempDecimal = decimal;

    while (tempDecimal > 0)
    {
        binary[index] = (tempDecimal % 2) + '0';

        tempDecimal /= 2;

        index++;
    }
    binary[index] = '\0';

    // Reverse the converted binary to get final binary result
    strrev(binary);

    printf("Decimal value is %lld\n", decimal);
    printf("Binary value is %s\n", binary);

    return 0;
}