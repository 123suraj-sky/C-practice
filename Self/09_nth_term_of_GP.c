#include <stdio.h>
#include <math.h>

void nth_term_of_GP(float first_term, float common_ratio, int number_of_terms, float nth_term)
{
    nth_term = first_term * pow(common_ratio, number_of_terms - 1); // formula for nth term of a G.P.
    printf("%dth term of this G.P. is %f\n", number_of_terms, nth_term);
}

int main()
{
    printf("\n*** Program to calculate the nth term of a given G.P. ***\n\n\n");
    float first_term, common_ratio, nth_term;
    int number_of_terms;

    printf("Enter the first term of the G.P.\n");
    scanf("%f", &first_term);

    printf("Enter the common ratio of the G.P.\n");
    scanf("%f", &common_ratio);

    printf("Enter the number of terms in the G.P.\n");
    scanf("%d", &number_of_terms);

    nth_term_of_GP(first_term, common_ratio, number_of_terms, nth_term);

    return 0;
}