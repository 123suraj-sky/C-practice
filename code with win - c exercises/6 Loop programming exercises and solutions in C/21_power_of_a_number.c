#include <stdio.h>

int main()
{
    printf("*** Program to find power of a number using for loop ***\n\n");
    int base, exponent;
    long long power = 1; // Here we can also use int
    int i;

    // Input base and exponent from user
    printf("Enter the value of base:-\n");
    scanf("%d", &base);
    printf("Enter the value of exponent:-\n");
    scanf("%d", &exponent);

    // Multiply bse, exponent times
    for (i = 1; i <= exponent; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %lld", base, exponent, power);
    return 0;
}

// Some compiler don't recognize long long data type
// So we can also use long and also replace format specifier from %lld to %ld