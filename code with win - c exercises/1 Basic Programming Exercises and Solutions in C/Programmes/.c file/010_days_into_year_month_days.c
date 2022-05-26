#include <stdio.h>

int main()
{
    printf("*** Programme to convert days into year, month and days\n\n");

    float days;
    printf("Enter the number of days\n");
    scanf("%f", &days);

    float years, months;
    years = days / 365;
    months = days / 30;
    printf("Number of years in %f days is %f\n", days, years);
    printf("Number of months in %f days is %f\n", days, months);
    return 0;
}