#include <stdio.h>

int main()
{
    printf("*** Programme to calculate product of digits of a number ***\n\n");
    int n, product = 1; // We don't start product from 0 because multiplication of any number to 0 gives 0
    printf("Enter any number:-\n");
    scanf("%d", &n);

    while (n != 0)
    {
        product *= n % 10; // find last digit of number
        n = n / 10; // Remove last digit
    }

    printf("Produt of digits is %d", product);
    return 0;
}