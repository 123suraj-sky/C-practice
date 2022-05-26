#include <stdio.h>

int main()
{
    float first_term, common_difference, sum = 0;
    int no_of_terms;
    puts("*** Program for finding mean of an AP ***\n");

    printf("Enter 1st term of the AP: ");
    scanf("%f", &first_term);
    printf("Enter common difference of the AP: ");
    scanf("%f", &common_difference);
    printf("Enter number of terms of the AP: ");
    scanf("%d", &no_of_terms);

    for (int i = 1; i <= no_of_terms; i++)
        sum += first_term + (i - 1) * common_difference;

    printf("Your AP is %.2f, %.2f, %.2f, ...\n", first_term, first_term + common_difference, first_term + common_difference + common_difference);
    printf("Mean of the given AP is %.2f\n", sum / no_of_terms);

    return 0;
}