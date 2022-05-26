#include <stdio.h>
#include <math.h>

int main(){
    printf("*** Programme for finding square root of any number ***\n\n");

    float x;
    printf("Enter the value of x\n");
    scanf("%f", &x);

    printf("The square root of x is %f\n", pow(x,0.5));
    return 0;
}