#include <stdio.h>

int main()
{
    printf("*** Programme to check whether the triangle is equilateral, isosceles or scalene triangle ***\n\n");
    int a, b, c;
    printf("Enter three sides of a triangle:-\n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a == b) && (b == c) && (c == a) && (a < b + c) && (b < a + c) && (c < a + b) && (a > 0) && (b > 0) && (c > 0))
    {
        printf("EQUILATERAL TRIANGLE  \nAll three sides of this triangle is same\n");
    } // ((a < b + c) && (b < a + c) && (c < a + b)) && (a > 0) && (b > 0) && (c > 0)
      // Above condition is for checking validity of the triangle
    else if ((a == b) && (a < b + c) && (b < a + c) && (c < a + b) && (a > 0) && (b > 0) && (c > 0))
    {
        printf("ISOCELES TRIANGLE \nTwo sides of this triangle is same \n");
    }
    else if ((b == c) && (a < b + c) && (b < a + c) && (c < a + b) && (a > 0) && (b > 0) && (c > 0))
    {
        printf("ISOCELES TRIANGLE \nTwo sides of this triangle is same \n");
    }
    else if ((a == c) && (a < b + c) && (b < a + c) && (c < a + b) && (a > 0) && (b > 0) && (c > 0))
    {
        printf("ISOCELES TRIANGLE \nTwo sides of this triangle is same \n");
    }
    else if ((a != b != c) && ((a < b + c) && (b < a + c) && (c < a + b) && (a > 0) && (b > 0) && (c > 0)))
    {
        printf("SCALENE TRIANGLE \nNone sides of this triangle is equal\n");
    }
    else
    {
        printf("This is not a valid triangle\n");
    }
    return 0;
}