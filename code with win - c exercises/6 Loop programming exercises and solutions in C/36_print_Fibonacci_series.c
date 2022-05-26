#include <stdio.h>

int main()
{
    printf("*** Program to print Fibonacci series up to n terms ***\n\n");

    int num, a, b, c, i;
    printf("Enter the value of nth term:-\n");
    scanf("%d", &num);

    // Fibonacci initialization
    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci series: \n");

    // Iterate through n terms
    for (i = 1; i <= num; i++)
    {
        printf("%d, ", c);

        a = b;     // copy n-1 to n-2
        b = c;     // copy current to n-1
        c = a + b; // New term
    }

    printf(". . .");
    return 0;
}