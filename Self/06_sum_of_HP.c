#include <stdio.h>
#include <math.h> // for calculating power in this case

void sum_of_HP(float first_term, float com_diff, float number_of_terms, float sum){
    for(int i = 1; i <= number_of_terms; i++) //Finding sum of H.P using loops
    {
        sum += pow((first_term + ((i - 1) * com_diff)), (-1)); // This is general term of an HP
    }

    printf("Your H.P. is %f, %f, %f, ...\n", pow(first_term, (-1)), pow((first_term + com_diff), (-1)), pow((first_term + com_diff + com_diff), (-1)));
    printf("Your H.P. is 1/%f, 1/%f, 1/%f, ...\n", first_term, first_term + com_diff, first_term + com_diff + com_diff);
    printf("Sum of this H.P. upto %.0fth term is %.f\n", number_of_terms, sum);
}

int main()
{
    float first_term, number_of_terms, com_diff, sum = 0;  // 'first_term' is first term of the H.P & 'com_diff' is common difference of the H.P & 'sum' is sum of the H.P. upto nth term & 'number_of_terms' is number of terms

    printf("Enter first term obtained by inversing the HP forming a AP:-\n");
    scanf("%f", &first_term);
    printf("Enter the common difference obtained by inversing the HP forming a AP:-\n");
    scanf("%f", &com_diff);
    printf("Enter number of terms\n");
    scanf("%f", &number_of_terms);

    sum_of_HP(first_term, com_diff, number_of_terms, sum);
    return 0;
}

/* Modifications to do:-
    if entered first term is integer then print both line 21 and 20
    or if entered first term is not an integer then don't print line 21
    
    For doing above modifications:-
        find that how to find that a enterd number is an integer */