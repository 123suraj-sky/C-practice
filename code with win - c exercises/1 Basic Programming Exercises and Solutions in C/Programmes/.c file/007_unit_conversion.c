#include <stdio.h>

int main()
{
    printf("*** Programme for unit conversion of centimeter into meter and kilometer\n\n");

    float x;
    printf("Enter the value in centimeter\n");
    scanf("%f", &x);

    float meter;
    meter = x / 100;
    printf("The value of %f centimeter in meter is %f meter\n", x, meter);

    float km;
    km = x / 100000;
    printf("The value of %f centimeter in kilometer is %f kilometer\n", x, km);

    return 0;
}