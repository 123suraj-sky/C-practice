#include <stdio.h>

int main()
{
    printf("*** Programme to input basic salary of an employee and calculate its Gross salary ***\n\n");
    // Basic Salary <= 10000 : HRA = 20%, DA = 80%
    // Basic Salary <= 20000 : HRA = 25%, DA = 90%
    // Basic Salary > 20000 : HRA = 30%, DA = 95%

    float basic, gross, da, hra;
    printf("Enter basic salary of an employee:-\n");
    scanf("%f", &basic);

    if (basic <= 10000)
    {
        da = basic * 0.8;
        hra = basic * 0.2;
    }
    else if (basic <= 20000)
    {
        da = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.95;
        hra = basic * 0.3;
    }

    gross = basic + hra + da;

    printf("Gross Salary of employee = %.2f", gross);
    // %.2f is used to printf the gross salary only up to two decimal places. We can also use %f to fractional values normally up to six decimal
    return 0;
}