#include <stdio.h>

int main()
{
    printf("*** Program to find HCF(GCD) of two numbers ***\n\n");
    int i, num1, num2, min, hcf = 1;

    printf("Enter any two numbers to find HCF:-\n");
    scanf("%d %d", &num1, &num2);

    min = (num1 < num2) ? num1 : num2;

    for (i = 1; i <= min; i++)
    {
        // If i is factor of both number
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
    return 0;
}