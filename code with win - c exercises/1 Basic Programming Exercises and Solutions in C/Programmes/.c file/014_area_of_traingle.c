#include <stdio.h>

int main()
{
    printf("*** Programme for finding area of traingle when its base and height is given ***\n\n");

    float base, height;
    printf("Enter the value of base\n");
    scanf("%f", &base);

    printf("Enter the value of height\n");
    scanf("%f", &height);

    float area;
    area = 0.5 * base * height;
    printf("Area of the required traingle is %f\n", area);
    return 0;
}