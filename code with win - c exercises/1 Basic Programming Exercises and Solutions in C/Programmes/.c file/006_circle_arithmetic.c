#include <stdio.h>

int main()
{
    printf("*** Programme to find diameter, perimeter, area of a given circle\n\n");

    float radius, pi;
    pi = 3.14159;

    printf("Enter the value of radius\n");
    scanf("%f", &radius);

    printf("The diameter of the circle is %f\n", radius * 2);
    printf("The perimeter of the circle is %f\n", 2 * pi * radius);
    printf("The area of the circle is %f\n", pi * radius * radius);
    return 0;
}