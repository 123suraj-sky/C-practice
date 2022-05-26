#include <stdio.h>
#include <math.h>

int main(){
    printf("*** Programme for finding the value of x to the power y ***\n\n");

    float x, y;
    
    printf("Enter the value of x\n");
    scanf("%f", &x);

    printf("Enter the value of y\n");
    scanf("%f", &y);

    printf("The value of x to the power y is %f\n", pow(x,y));
    return 0;
}