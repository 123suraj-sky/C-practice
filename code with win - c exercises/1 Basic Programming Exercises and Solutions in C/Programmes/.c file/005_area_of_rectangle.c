#include <stdio.h>

int main(){
    printf("*** Programme for Area of a rectangle ***\n\n");

    float length, breadth;

    printf("Enter the value of length\n", length);
    scanf("%f", &length);

    printf("Enter the value of breadth\n", breadth);
    scanf("%f", &breadth);

    float area;
    area = length * breadth;
    printf("The area of required rectangle is %f\n", area);
    return 0;
}