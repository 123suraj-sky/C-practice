#include <stdio.h>
#include <math.h>

void nth_term_of_HP(float first_term, float common_difference, float nth_term, int number_of_terms)
{
    nth_term = pow((first_term + ((number_of_terms - 1) * common_difference)), (-1)); // formula for nth term of a G.P.
    printf("Your H.P. is %f, %f, %f, ...\n", pow(first_term, (-1)), pow((first_term + common_difference), (-1)), pow((first_term + common_difference + common_difference), (-1)));
    printf("%dth term of this H.P. is %f\n", number_of_terms, nth_term);
}

int main()
{
    printf("\n*** Program to calculate the nth term of a given H.P. ***\n\n\n");
    float first_term, common_differnce, nth_term;
    int number_of_terms;

    printf("Enter the first term of the H.P. after reversing the H.P. forming an A.P.\n");
    scanf("%f", &first_term);

    printf("Enter the common ratio of the H.P. after reversing the H.P. forming an A.P.\n");
    scanf("%f", &common_differnce);

    printf("Enter the number of terms in the H.P. after reversing the H.P. forming an A.P.\n");
    scanf("%d", &number_of_terms);

    nth_term_of_HP(first_term, common_differnce, nth_term, number_of_terms);
    return 0;
}