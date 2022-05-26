#include <stdio.h>
#include <limits.h> // used for INT_MAX

int main()
{
    int num, count;

    printf("Enter any number: ");
    scanf("%d", &num);

    count = 0;
    while (!(num & (~INT_MAX)))
    {
        count++;
        num <<= 1;
    }

    printf("Total number of leading zeros = %d\n", count);

    return 0;
}