#include <stdio.h>
void sum_of_AP(float first_term, float num, float com_diff, float sum)
{
    for (int i = 1; i <= num; i++) // loop for finding sum of the A.P.
    {
        sum += (first_term + ((i - 1) * com_diff)); // This is general term of an AP
    }

    if (first_term == 1 && com_diff == 1) // special case of A.P. which is natural number
    {
        printf("This AP is in form of natural number and sum of %.0fth term is %.3f\n\n", num, sum);
    }
    else if (first_term == 0 && com_diff == 1) // special case of A.P. which is whole number
    {
        printf("This AP is in form of whole number and sum of %.0fth term is %.3f\n\n", num, sum);
    }
    else if (com_diff == 0) // special case of A.P. which is a constant sequence
    {
        printf("This AP is constant sequence and sum of %.0fth term is %.3f\n\n", num, sum);
    }
    else
    {
        printf("Sum of AP upto %.0fth term is %.3f\n\n", num, sum);
    }
}

int main()
{
    float first_term, num, com_diff, sum = 0; // 'first_term' is first term of the A.P & 'com_diff' is common difference of the A.P & 'sum' is sum of the A.P. upto nth term & 'num' is number of terms

    printf("Enter first term of the AP:-\n");
    scanf("%f", &first_term);
    printf("Enter the common difference of the AP:-\n");
    scanf("%f", &com_diff);
    printf("Enter number of terms\n");
    scanf("%f", &num);

    sum_of_AP(first_term, num, com_diff, sum);

    return 0;
}