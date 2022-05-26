#include <stdio.h>
#include <math.h>

int main(){
    printf("*** Programme for calculating compound interest ***\n\n");

    float P, r, n, t;
    printf("Enter the value of Principal value/amound\n");
    scanf("%f", &P);

    printf("Enter the interest rate\n");
    scanf("%f", &r);

    printf("Enter the number of times interest applied per time period\n");
    scanf("%f", &n);

    printf("Enter the number of time periods elapsed in years\n");
    scanf("%f", &t);

    float A;
    A = P * pow((1 + (r/n)),(n * t));
    printf("The final amount to be paid is %f\n", A);
    return 0;
}