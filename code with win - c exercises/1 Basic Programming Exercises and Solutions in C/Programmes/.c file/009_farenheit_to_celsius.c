#include <stdio.h>

int main()
{
    printf("*** Programme to convert farenheit to celcius ***\n\n");

    float farenheit, celsius;
    printf("Enter the value of temperature°F\n");
    scanf("%f", &farenheit);

    celsius = (farenheit - 32) * (5 / 9);
    printf("The value of temperature in °C is %f\n", celsius);
    return 0;
}