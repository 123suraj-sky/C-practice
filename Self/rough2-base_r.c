#include <stdio.h>

void decimal_to_octal(long long decimal, long long base)
{
    long long tempDecimal, base_r = 0;
    int i, rem, place = 1;

    // decimal = name;        // assigning number in name to decimal for conversion
    tempDecimal = decimal; // Copy it to temp variable for further calculation

    // Decimal to base_r conversion
    while (tempDecimal > 0)
    {
        rem = tempDecimal % base;
        base_r = (rem * place) + base_r;
        tempDecimal /= base;
        place *= 10;
    }
        printf("Base %lld - number is %lld\n",base, base_r);
}

int main()
{
    long long decimal, base;
    printf("Enter decimal number: ");
    scanf("%lld", &decimal);
    printf("In which base you want to convert: ");
    scanf("%lld", &base);
    decimal_to_octal(decimal, base);

    return 0;
}