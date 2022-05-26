#include <stdio.h>
#include <math.h>

int main()
{
    printf("*** Programme to find all roots of quadratic equation ***\n\n");
    int a, b, c;
    printf("Enter the values of a, b, c:-\n");
    scanf("%d%d%d", &a, &b, &c);

    printf("Your quadratic equation is %dx^2 + %dx + %d\n", a, b, c);
    int d; // 'd' is used for discriminent
    d = ((pow(b, 2)) - (4 * a * c));

    float r1, r2; // 'r1', 'r2' means roots
                  // r1 and r2 is for real roots and r3 and r4 is for imaginary roots
    r1 = (-b + pow(d, 0.5)) / (2 * a);
    r2 = (-b - pow(d, 0.5)) / (2 * a);

    if (d >= 0)
        printf("This equation have real roots\nAnd its roots are %f and %f\n", r1, r2);
    else
    {
        printf("This equation have imaginary roots\nAnd its roots are (-%d + %.2fi) / (%d)\n", b, sqrt(-d), 2 * a);
        printf("and (-%d - %.2fi) / (%d)\n", b, sqrt(-d), 2 * a);
    }
    return 0;
}