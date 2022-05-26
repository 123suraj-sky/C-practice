#include <stdio.h>

int main()
{
    printf("*** Programme for finding simple interest ***\n\n");

    float P, R, T;
    printf("Enter the value of Principal value (P)\n");

    scanf("%f", &P);
    printf("Enter the value of Rate (R)\n");

    scanf("%f", &R);
    printf("Enter Time in years (T)\n");

    scanf("%f", &T);

    float S;
    S = (P * R * T) / 100;
    printf("The simple interest according to above data is %f\n", S);

    return 0;
}