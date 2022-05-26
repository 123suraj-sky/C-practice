#include <stdio.h>

int main()
{
    printf("*** Programme for finding third angle of traingle when two angle is given ***\n\n");

    float x, y;

    printf("Enter the first angle here\n");
    scanf("%f", &x);

    printf("Enter the second angle here\n");
    scanf("%f", &y);

    float angle;
    angle = (180 - (x + y));
    if ((x + y >= 180))
    {
        printf("Invalid value!! Traingle not form\n");
    }
    else
    {
        printf("The value of third angle is %f\n", angle);
    }
    return 0;
}