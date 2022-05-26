#include <stdio.h>

int main()
{
    printf("*** Program to print Fibonacci series in a given range ***\n\n");

    int a, b, c, start, end;

    printf("Enter starting term:\n");
    scanf("%d", &start);
    printf("Enter end term:\n");
    scanf("%d", &end);

    // Fibonacci initiazilation
    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

    // Iterate through terms
    while (c <= end)
    {
        // If current terms is greater than start term
        if (c >= start)
        {
            printf("%d, ", c);
        }

        a = b;     // copy n-1 to n-2
        b = c;     // copy current to n-1
        c = a + b; // new term
    }

    return 0;
}