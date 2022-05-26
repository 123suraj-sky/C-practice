#include <stdio.h>
#include <math.h> // used for sqrt()

int main()
{
    printf("*** Programme to find roots of a quadratic equation ***\n\n");
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;

    printf("Enter the value of a, b, c\n");
    scanf("%f%f%f", &a, &b, &c);

    printf("Your quadratic equation is %fx^2 + %fx + %f\n", a, b, c);

    discriminant = (b * b) - (4 * a * c);

    switch (discriminant > 0)
    {
    case 1:
        // If discriminant is positive
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Two distinct and real roots exists: %.2f \nand\n %.2f\n", root1, root2);
        break;

    case 0:
        // If discriminant is not positive
        switch (discriminant < 0)
        {
        case 1:
            // If discriminant is negative
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-discriminant) / (2 * a);

            printf("Two distinct complex roots exits: %.2f + i%.2f \nand\n %.2f - i%.2f\n", root1, imaginary, root2, imaginary);
            break;

        case 0:
            // If discriminant is zero
            root1 = root2 = -b / (2 * a);

            printf("Two equal and real roots exists: %.2f \nand\n %.2f\n", root1, root2);
            break;
        }
    }
    return 0;
}