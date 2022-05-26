#include <stdio.h>

void sum_of_AP(float first, float com_diff, float sum, float n) // 'first' is first term of the A.P & 'com_diff' is common difference of the A.P & 'sum' is sum of the A.P. upto nth term and 'n' is nth term of the A.P.
{
    sum = ((n / 2) * ((2 * first) + ((n - 1) * com_diff))); // Formula of sum of an A.P.
    
    if (first == 1 && com_diff == 1) // special case of A.P. which is natural number
    {
        printf("This AP is in form of natural number and sum to %.0fth term is %.3f\n", n, sum);
    }
    else if (first == 0 && com_diff == 1) // special case of A.P. which is whole number
    {
        printf("This AP is in form of whole number and sum to %.0fth term is %.3f\n", n, sum);
    }
    else
    {
        printf("Sum of AP upto %.0fth term is %.3f\n", n, sum);
    }
}

int main()
{
    printf("*** Program to find sum of an AP ***\n\n");

    float first, com_diff, sum; // 'first' is first term of the A.P & 'com_diff' is common difference of the A.P & 'sum' is sum of the A.P. upto nth term
    printf("Enter first term of the AP:-\n");
    scanf("%f", &first);
    printf("Enter the common difference of the AP:-\n");
    scanf("%f", &com_diff);

    float n; // 'n' is nth term of the A.P.
    printf("Enter the value of n(nth term)\n");
    scanf("%f", &n);

    sum_of_AP(first, com_diff, sum, n);

    return 0;
}