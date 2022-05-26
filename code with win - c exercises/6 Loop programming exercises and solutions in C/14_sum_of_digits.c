#include <stdio.h>

int main()
{
    printf("*** Programme to calculate sum of digits of a number ***\n\n");
    int n, sum = 0;
    printf("Enter any number:-\n");
    scanf("%d", &n);

    while (n != 0)
    {
        sum += n % 10; // find last digit of number
        n = n / 10; // Remove last digit
    }

    printf("Sum of digits is %d", sum);
    return 0;
}