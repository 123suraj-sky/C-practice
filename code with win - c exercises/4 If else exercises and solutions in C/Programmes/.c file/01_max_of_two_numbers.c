#include <stdio.h>

int main(){
    printf("*** Programme for finding maximum of two numbers ***\n\n");
    float a, b;
    printf("Enter the values of a and b\n");
    scanf("%f%f", &a, &b);

    if(a > b){
        printf("%f is greater than %f\n", a, b);
    }
    else if (a == b){
        printf("%f is equal to %f\n", a, b);
    }
    else {
        printf("%f is greater than %f\n", b, a);
    }
    return 0;
}