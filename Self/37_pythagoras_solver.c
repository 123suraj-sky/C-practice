#include <stdio.h>
#include <math.h>

int main()
{
    float height, base, hypotenuse;
    char temp; // this stores which quantity is to be found and helps to decide that only that quantity which is missing will be printed as result

    printf("*** Program for solving problems on pythagoras formula ***\n\n");
    printf("Enter 0 if the quantity is unknown\n\n");
    printf("Enter height of the triangle: ");
    scanf("%f", &height);
    printf("Enter base of the triangle: ");
    scanf("%f", &base);
    printf("Enter hypotenuse of the triangle: ");
    scanf("%f", &hypotenuse);

    if ((height < 0 || base < 0 || hypotenuse < 0) || (height == 0 && base == 0) || (height == 0 && hypotenuse == 0) || (base == 0 && hypotenuse == 0)) // triangle is not possible
        goto end;

    if (height == 0)
    {
        temp = 'h'; // small h for height
        height = sqrt(pow(hypotenuse, 2) - pow(base, 2));
        goto pythagoras; // for printing this is pythagoras triangle
    }
    else if (base == 0)
    {
        temp = 'b'; // b for base
        base = sqrt(pow(hypotenuse, 2) - pow(height, 2));
        goto pythagoras; // for printing this is pythagoras triangle
    }
    else if (hypotenuse == 0)
    {
        temp = 'H'; // capital H for hypotenuse
        hypotenuse = sqrt(pow(base, 2) + pow(height, 2));
        goto pythagoras; // for printing this is pythagoras triangle
    }

end:
    if ((pow(hypotenuse, 2) == pow(base, 2) + pow(height, 2)) && (hypotenuse == base == height != 0)) // this checks if the triangle is pythagoras or not when the user enter all the values(i.e. not enter 0 for unknown)
    pythagoras:
        printf("\nThis is a pythagoras triangle\n");
    else
        printf("This is not a pythagoras triangle\n");

    if ((height < 0 || base < 0 || hypotenuse < 0) || (height == 0 && base == 0) || (height == 0 && hypotenuse == 0) || (base == 0 && hypotenuse == 0) || ((height + base <= hypotenuse) || (base + hypotenuse <= height) || (height + hypotenuse <= base))) // first bracket checks if the entered value is less than zero, second bracket checks if any two or all three values are unknown(i.e. entered 0), third and last condition checks for general condition of triangle
        printf("This triangle is not possible\n");
    else
    {
        if (temp == 'h')
            printf("\nHeight of the triangle is %f\n", height);

        else if (temp == 'b')
            printf("\nBase of the triangle is %f\n", base);

        else if (temp == 'H')
            printf("\nHypotenuse of the triangle is %f\n", hypotenuse);
    }

    return 0;
}