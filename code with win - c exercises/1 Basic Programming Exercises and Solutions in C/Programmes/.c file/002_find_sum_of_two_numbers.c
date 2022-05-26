#include <stdio.h>

int main()
{

    printf("***Program for sum of two numbers***\n\n");

    float a, b;
    int i;
    for (i = 1; i <= 9999999; i++)
    {

        printf("Enter first number \n", i);
        scanf("%f", &a);

        printf("Enter second number\n", i);
        scanf("%f", &b);

        printf("The sum of and a and b is %f\n\n\n", a + b);
    }
    return 0;
}