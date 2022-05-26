#include <stdio.h>
void nth_term_of_AP(float first_term, float common_difference, float nth_term, int number_of_terms)
{
    nth_term = first_term + ((number_of_terms - 1) * common_difference); // Formula for nth term of the A.P.
    printf("%dth term of this A.P. is %f\n", number_of_terms, nth_term);
}

int main()
{
    printf("\n*** Program to calculate the nth term of a given A.P. ***\n\n\n");

    float first_term, common_difference, nth_term;
    int number_of_terms;

    printf("Enter the first term of the A.P.\n");
    scanf("%f", &first_term);

    printf("Enter the common difference of the A.P.\n");
    scanf("%f", &common_difference);

    printf("Enter the number of terms in the A.P.\n");
    scanf("%d", &number_of_terms);

    nth_term_of_AP(first_term, common_difference, nth_term, number_of_terms);

    return 0;
}