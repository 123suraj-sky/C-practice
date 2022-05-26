// Modifications to do
// in sum of G.P. ask user if he/she want to find the sum of the G.P. upto infinity or not 
// if possible (if not possible print a sorry message that it cannot be printed) find and print the sum to infinity
// use goto statement to do this --> is the user wants it or not

#include <stdio.h>
#include <math.h>

void sum_of_AP(float first_term, float number_of_terms, float com_diff, float sum);               // first_term is first term of the series, com_diff is the common difference, number_of_terms is the number of the terms in the series, sum is the sum of the series
void sum_of_GP(float first_term, float number_of_terms, float common_ratio, float sum);           // first_term is first term of the series, number_of_terms is the number of the terms in the series, common_ratio is the common ratio of the series, sum is the sum of the series
void sum_of_HP(float first_term, float com_diff, float number_of_terms, float sum);               // first_term is first term of the series, com_diff is the common difference, number_of_terms is the number of the terms in the series, sum is the sum of the series
void nth_term_of_AP(float first_term, float com_diff, float nth_term, float number_of_terms);     // first_term is first term of the series, com_diff is the common difference of the series, nth_term is the general term or last term or required term of the series, number_of_terms is the number of terms present in the series
void nth_term_of_GP(float first_term, float common_ratio, float number_of_terms, float nth_term); // first_term is first term of the series, common_ratio is the common ratio of the series, nth_term is the general term or last term or required term of the series, number_of_terms is the number of terms present in the series
void nth_term_of_HP(float first_term, float com_diff, float nth_term, float number_of_terms);     // first_term is first term of the series, com_diff is the common difference of the series, nth_term is the general term or last term or required term of the series, number_of_terms is the number of terms present in the series

int main()
{
start:
    printf("\n*** Program to find sum and nth term of an A.P., G.P., H.P. ***\n\n");
    int task_to_do;                                                               // which operation you want to perform
    float first_term, com_diff, number_of_terms, common_ratio, nth_term, sum = 0; // first_term is first term of the series, com_diff is the common difference, number_of_terms is the number of the terms in the series, common_ratio is the common ratio of the series, sum is the sum of the series
ask_again:                                                                        // ask_again to ask user to again enter the number if he/she entered number different from the given cases
// asking user which operation he/she want to perform
    printf("\nWhat do you want to do?\nEnter:\n\
(1) sum of A.P.\n\
(2) sum of G.P.\n\
(3) sum of H.P.\n\
(4) nth term of A.P.\n\
(5) nth term of G.P.\n\
(6) nth term of H.P.\n\
(7) Enter 7 to exit the program\n");
    scanf("%d", &task_to_do);
    switch (task_to_do)
    {
    case 1:
        // taking input of first term, common difference, and number of terms of an A.P. form the user
        printf("\nEnter first term of the AP:-\n");
        scanf("%f", &first_term);
        printf("Enter the common difference of the AP:-\n");
        scanf("%f", &com_diff);
        printf("Enter number of terms\n");
        scanf("%f", &number_of_terms);
        // function call to find sum of A.P.
        sum_of_AP(first_term, number_of_terms, com_diff, sum);
        break;

    case 2:
        printf("\nEnter first term of the GP:-\n");
        scanf("%f", &first_term);
        printf("Enter the common ratio of the GP:-\n");
        scanf("%f", &common_ratio);
        printf("Enter number of terms\n");
        scanf("%f", &number_of_terms);

        sum_of_GP(first_term, number_of_terms, common_ratio, sum);
        break;

    case 3:
        printf("\nEnter first term obtained by inversing the HP forming a AP:-\n");
        scanf("%f", &first_term);
        printf("Enter the common difference obtained by inversing the HP forming a AP:-\n");
        scanf("%f", &com_diff);
        printf("Enter number of terms\n");
        scanf("%f", &number_of_terms);

        sum_of_HP(first_term, com_diff, number_of_terms, sum);
        break;

    case 4:
        printf("\nEnter the first term of the A.P.\n");
        scanf("%f", &first_term);
        printf("Enter the common difference of the A.P.\n");
        scanf("%f", &com_diff);
        printf("Enter the number of terms in the A.P.\n");
        scanf("%f", &number_of_terms);

        nth_term_of_AP(first_term, com_diff, nth_term, number_of_terms);
        break;

    case 5:
        printf("\nEnter the first term of the G.P.\n");
        scanf("%f", &first_term);
        printf("Enter the common ratio of the G.P.\n");
        scanf("%f", &common_ratio);
        printf("Enter the number of terms in the G.P.\n");
        scanf("%f", &number_of_terms);

        nth_term_of_GP(first_term, common_ratio, number_of_terms, nth_term);
        break;

    case 6:
        printf("\nEnter the first term of the H.P. after reversing the H.P. forming an A.P.\n");
        scanf("%f", &first_term);
        printf("Enter the common ratio of the H.P. after reversing the H.P. forming an A.P.\n");
        scanf("%f", &com_diff);
        printf("Enter the number of terms in the H.P. after reversing the H.P. forming an A.P.\n");
        scanf("%f", &number_of_terms);

        nth_term_of_HP(first_term, com_diff, nth_term, number_of_terms);
        break;

    case 7:
        goto end;

    default:
        printf("Error!! Please enter number between 1 to 7\n");
        goto ask_again;
    }

    // Asking user if again want to run this program
    int a;
    printf("\nDo you again want to run this program?\n(1) Yes\n(2) Press any other key to exit\n");
    scanf("%d", &a);
    if (a == 1)
    {
        goto start;
    }
    else
    {
        goto end;
    }

// ending message
end:
    printf("\n~~~ Thanks for using this program ~~~\n");
    printf("     ~~~     Visit Again    ~~~\n");
    return 0;
}

// finding sum of A.P.
void sum_of_AP(float first_term, float number_of_terms, float com_diff, float sum)
{
    for (int i = 1; i <= number_of_terms; i++) // loop for finding sum of the A.P.
    {
        sum += (first_term + ((i - 1) * com_diff)); // This is general term of an AP
    }

    if (first_term == 1 && com_diff == 1) // special case of A.P. which is natural number
    {
        printf("This AP is in form of natural number and sum to %.0fth term is %.3f\n\n", number_of_terms, sum);
    }
    else if (first_term == 0 && com_diff == 1) // special case of A.P. which is whole number
    {
        printf("This AP is in form of whole number and sum to %.0fth term is %.3f\n\n", number_of_terms, sum);
    }
    else if (com_diff == 0) // special case of A.P. which is a constant sequence
    {
        printf("This AP is constant sequence and sum to %.0fth term is %.3f\n\n", number_of_terms, sum);
    }
    else
    {
        printf("Sum of AP upto %.0fth term is %.3f\n\n", number_of_terms, sum);
    }
}

// finding sum of G.P.
void sum_of_GP(float first_term, float number_of_terms, float common_ratio, float sum)
{
    for (int i = 1; i <= number_of_terms; i++) // loop for calculating the sum of the GP
    {
        sum += (first_term * (float)(pow(common_ratio, (i - 1)))); // This is general term of an GP
    }

    if (common_ratio == 1)
    {
        printf("This is a constant sequence and sum of the this G.P. upto %.0fth term is %.3f\n\n", number_of_terms, sum);
    }
    else
    {
        printf("The Sum of this G.P. upto %.0fth term is %.3f\n", number_of_terms, sum);
    }
}

// finding sum of H.P.
void sum_of_HP(float first_term, float com_diff, float number_of_terms, float sum)
{
    for (int i = 1; i <= number_of_terms; i++) //Finding sum of H.P using loops
    {
        sum += pow((first_term + ((i - 1) * com_diff)), (-1)); // This is general term of an HP
    }

    printf("Your H.P. is %f, %f, %f, ...\n", pow(first_term, (-1)), pow((first_term + com_diff), (-1)), pow((first_term + com_diff + com_diff), (-1)));
    printf("Your H.P. is 1/%f, 1/%f, 1/%f, ...\n", first_term, first_term + com_diff, first_term + com_diff + com_diff);
    printf("Sum of this H.P. upto %.0fth term is %.f\n", number_of_terms, sum);
}

// finding nth term of A.P.
void nth_term_of_AP(float first_term, float com_diff, float nth_term, float number_of_terms)
{
    nth_term = first_term + ((number_of_terms - 1) * com_diff); // Formula for nth term of the A.P.
    printf("%.0fth term of this A.P. is %f\n", number_of_terms, nth_term);
}

// finding nth term of G.P.
void nth_term_of_GP(float first_term, float common_ratio, float number_of_terms, float nth_term)
{
    nth_term = first_term * pow(common_ratio, number_of_terms - 1); // formula for nth term of a G.P.
    printf("%.0fth term of this G.P. is %f\n", number_of_terms, nth_term);
}

// finding nth term of H.P.
void nth_term_of_HP(float first_term, float com_diff, float nth_term, float number_of_terms)
{
    nth_term = pow((first_term + ((number_of_terms - 1) * com_diff)), (-1)); // formula for nth term of a G.P.
    printf("Your H.P. is %f, %f, %f, ...\n", pow(first_term, (-1)), pow((first_term + com_diff), (-1)), pow((first_term + com_diff + com_diff), (-1)));
    printf("%.0fth term of this H.P. is %f\n", number_of_terms, nth_term);
}