#include <stdio.h>

int main()
{
    printf("*** Programme for finding the area of an equilaterl traingle ***\n\n");

    float side;
    printf("Enter the value of side of equilateral traingle\n");
    scanf("%f", &side);

    float area;
    area = 0.433 * side * side;
    printf("Area of required traingle is %f\n", area);
    return 0;
}