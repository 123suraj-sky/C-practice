#include <stdio.h>

int main()
{
    printf("*** Programme to convert celcius to farenheit\n\n");
    // (celcius * (9/5)) + 32 = farenheit
    // To print °C use shortcut --> Alt + 0176
    float farenheit, celsius;

    printf("Enter the value of temperature in °C\n");
    scanf("%f", &celsius);

    farenheit = (celsius * (9 / 5)) + 32;
    printf("The value of °C in °F is %f", farenheit);
    return 0;
}