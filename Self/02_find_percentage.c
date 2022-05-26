#include <stdio.h>

int main()
{
    printf("*** Program to find percentage ***\n\n");
    float a, b; // 'a' for total value entered value entered by the user and 'b' for obtained value
    printf("Enter total value:-\n");
    scanf("%f", &a);

    printf("Enter given/obtained value:-\n");
    scanf("%f", &b);

    float c; // c is percentage
    c = (b / a) * 100;
    printf("Your percentage is %.2f\n", c);
    return 0;
}