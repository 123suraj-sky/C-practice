#include <stdio.h>
#include <math.h> // for calculating power in this case

void sum_of_GP(float first_term, float number_of_terms, float common_ratio, float sum)
{
    for (int i = 1; i <= number_of_terms; i++) // loop for calculating the sum of the GP
    {
        sum += (first_term * (float)(pow(common_ratio, (i - 1)))); // This is general term of an GP
    }

    if (common_ratio == 1)
    {
        printf("This is a constant sequence and sum of the this G.P. is upto %.0fth term is %.3f\n\n", number_of_terms, sum);
    }
    else
    {
        printf("The Sum of this G.P. upto %.0fth term is %.3f\n", number_of_terms, sum);
    }
}

int main()
{
    float first_term, number_of_terms, common_ratio, sum = 0; // 'first_term' is first term of the G.P & 'number_of_terms' is number of terms of the G.P & 'sum' is sum of the G.P. upto nth term
    printf("Enter first term of the GP:-\n");
    scanf("%f", &first_term);
    printf("Enter the common ratio of the GP:-\n");
    scanf("%f", &common_ratio);
    printf("Enter number of terms\n");
    scanf("%f", &number_of_terms);

    sum_of_GP(first_term, number_of_terms, common_ratio, sum);
    return 0;
}