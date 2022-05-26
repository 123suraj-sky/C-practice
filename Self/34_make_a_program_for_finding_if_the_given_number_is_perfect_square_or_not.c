#include <stdio.h>
#include <math.h>

int main()
{
    // float x = 5.5;
    // printf("ceil of %f is %lf\n", x, ceil(x));
    // printf("ceil of %f is %lf\n", x, floor(x));

    float number;
    printf("Enter a number: ");
    scanf("%f", &number);

    if (number >= 0)
    {
        if (sqrt(number) == sqrt(ceil(number)))
            printf("%.0f is a perfect square\n", number);
        else
            printf("%f is not a perfect square\n", number);
    }
    else
        printf("Imaginary roots\n");
    
    return 0;
}