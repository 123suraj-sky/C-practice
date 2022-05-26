#include <stdio.h>
void sum_to_infinity(float first_term, float common_ratio);

int main()
{
    float first_term, common_ratio;
    printf("Enter the first term of the G.P.: ");
    scanf("%f", &first_term);
    printf("Enter the common ratio of the G.P.: ");
    scanf("%f", &common_ratio);

    // printing the G.P.
    printf("Your G.P. is %f, %f, %f ...\n", first_term, first_term * common_ratio, first_term * common_ratio * common_ratio);

    if (common_ratio < 1 && common_ratio > -1)
    {
        sum_to_infinity(first_term, common_ratio);
    }
    else
    {
        printf("Sum of this G.P. upto infinte terms is infinite\n");
    }
    return 0;
}

void sum_to_infinity(float first_term, float common_ratio)
{
    float sum;
    sum = first_term / (1 - common_ratio);
    // sum = (float)first_term / (1 - (float)common_ratio); // --> all three lines are same
    // sum = first_term / (1 - (float)common_ratio);  // --> all three lines are same
    // sum = (float) first_term / (1 - (float)common_ratio);  // --> all three lines are same
    printf("Sum to infinity of this G.P. is %f\n", sum);
}