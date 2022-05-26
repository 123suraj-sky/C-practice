#include <stdio.h>
#include <math.h>

int main()
{
    float first_term, common_ratio, sum = 0;
    int no_of_terms;
    puts("*** Program for finding mean of an GP ***\n");

    printf("Enter 1st term of the GP: ");
    scanf("%f", &first_term);
    printf("Enter common ratio of the GP: ");
    scanf("%f", &common_ratio);
    printf("Enter number of terms of the GP: ");
    scanf("%d", &no_of_terms);

    for (int i = 1; i <= no_of_terms; i++)
        sum += first_term * pow(common_ratio, i - 1);

    printf("Your GP is %.2f, %.2f, %.2f, ...\n", first_term, first_term * common_ratio, first_term * common_ratio * common_ratio);
    printf("Mean of the given GP is %.2f\n", sum / no_of_terms);

    system("pause");
    return 0;
}