#include <stdio.h>
#include <math.h> // Used for logarithmic function

int main()
{
    printf("*** Programme to count number of digits in a number ***\n\n");

    long long num;
    int count = 0;

    // Input from user
    printf("Enter any number:\n");
    scanf("%lld", &num);

    if (num < 0)
    {
        num = -num; // Used to calculate number of digits of negative numbers also
    }
    // Calulation of total digits
    count = (num == 0) ? 1 : (log10(num) + 1);

    printf("Total digits: %d", count);

    return 0;
}