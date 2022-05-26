#include <stdio.h>

int main()
{
    float first_term, common_difference, sum = 0;
    int no_of_terms;
    puts("*** Program for finding mean of an HP ***\n");

    printf("Enter 1st term of the HP when inverted form AP: ");
    scanf("%f", &first_term);
    printf("Enter common difference of the HP when inverted form AP: ");
    scanf("%f", &common_difference);
    printf("Enter number of terms of the HP: ");
    scanf("%d", &no_of_terms);

    for (int i = 1; i <= no_of_terms; i++)
        sum += 1 / (first_term + (i - 1) * common_difference);

    printf("Your HP is %.2f, %.2f, %.2f, ...\n", 1 / first_term, 1 / (first_term + common_difference), 1 / (first_term + common_difference + common_difference));
    printf("Mean of the given HP is %.2f\n", sum / no_of_terms);

    system("pause");
    return 0;
}