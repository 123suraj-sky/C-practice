#include <stdio.h>
#include <math.h>

int main()
{
    printf("*** Program to find the type of 2nd degree curve***\n\n");
    int a, b, c, f, g, h; // these variables are for coefficient          | a h g |
    int delta;            // delta for the value of the determinant  -->  | h b f |
                          //                                              | g f c |
    printf("General equation of 2nd degree is ax^2 + by^2 + 2hxy + 2gx + 2fy + c = 0\n\n");

    // Taking input of the coefficient
    printf("Now, please enter the coefficient\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter h: ");
    scanf("%d", &h);
    printf("Enter g: ");
    scanf("%d", &g);
    printf("Enter f: ");
    scanf("%d", &f);
    printf("Enter c: ");
    scanf("%d", &c);

    // Displaying the equation
    printf("\nYou have entered the equation:-\n");
    printf("%dx^2 + %dy^2 + %dxy + %dx + %dy + %d = 0\n\n", a, b, 2 * h, 2 * g, 2 * f, c);

    // finding delta
    delta = (a * b * c) + 2 * (f * g * h) - (a * f * f) - (b * g * g) - (c * h * h);

    if (delta != 0)
    {
        if (a * b - pow(h, 2) > 0)
        {
            if (a == b && h == 0)
                printf("This is circle\n");
            else
                printf("This is ellipse\n");
        }
        else if (a * b - pow(h, 2) < 0)
        {
            if (a + b == 0)
                printf("This is rectangular hyperbola\n");
            else
                printf("This is hyperbola\n");
        }
        else if (a * b - pow(h, 2) == 0)
            printf("This is parabloa\n");
    }
    else
    {
        if (a * b - pow(h, 2) == 0)
            printf("This is pair of parallel lines\n");
        else if (a + b == 0)
            printf("This is pair of prependicular lines\n");
        else if (a * b - pow(h, 2) != 0)
            printf("This is pair of intersecting lines\n");
    }

    return 0;
}

/* 
General equation of conic is f(x, y) = 0 --> ax2 + 2hxy + by2 + 2gx + 2fy + c = 0
case 1: delta != 0
    case a: ab - h2 > 0 --> ellipse
    case b: ab - h2 < 0 --> hyperbola
    case c: ab - h2 < 0  & a + b = 0 --> rectangular hyperbola
    case d: ab - h2 = 0 --> Parabola
    case e: a = b & h = 0 --> Circle

case 2: delta = 0
    ab - h2 = 0 --> Pair of parallel lines
    a + b = 0 --> Pair of prependicular lines
    ab - h2 != 0 --> Pair of intersecting lines
*/