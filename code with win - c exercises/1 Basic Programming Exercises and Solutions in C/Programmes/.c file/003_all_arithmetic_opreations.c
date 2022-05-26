#include <stdio.h>

int main(){
    printf("*** Programme for all arithmetic opreations***\n\n");

    float a, b;

    printf("Enter the value of a\n");
    scanf("%f", &a);

    printf("Enter the value of b\n");
    scanf("%f", &b);

    float sum;
    sum = a + b;
    printf("The sum of a and b is %f\n", sum);

    float subtraction;
    subtraction = a - b;
    printf("When b is subtracted from a gives %f\n", subtraction);

    float product;
    product = a * b;
    printf("The product of a and b is %f\n", product);

    float divide;
    divide = a / b;
    printf("When a is divided by b gives value %f\n", divide);
    return 0;
}