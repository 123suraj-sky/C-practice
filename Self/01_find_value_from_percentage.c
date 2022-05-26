#include <stdio.h>

int main(){
    printf("*** Programme to find x percentage of a given nubmer ***\n\n");
    float x, y; // x for percentage
              // y for given number
    printf("Enter a number:-\n");
    scanf("%f", &y);
    
    printf("Enter how much percentage of %.2f to be calculated:-\n", y);
    scanf("%f", &x);

    float z;
    z = (x / 100) * y;
    printf("%.2f percentage of %.2f is %.2f\n", x, y, z);

    // system("01_find_value_from_percentage.exe");
    // it will again call this same program to run

    return 0;
}