#include <stdio.h>

int main()
{
    printf("*** Programme to input angles of triangle and check whether triangle is valid or not ***\n\n");
    int a1, a2, a3;
    printf("Enter the three angles of the triangle:-\n");
    scanf("%d%d%d", &a1, &a2, &a3);

    int sum;
    sum = a1 + a2 + a3;

    if ((a1 + a2 + a3 == 180) && (a1 > 0) && (a2 > 0) && (a3 > 0))
    {
        printf("This is a valid triangle because sum of angles of your triangle is 180 degree\n");
    }
    else
    {
        printf("This is not a valid triangle\n");
    }
    return 0;
}