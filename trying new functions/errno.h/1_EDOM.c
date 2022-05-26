#include <stdio.h>
#include <errno.h>
#include <math.h>

// C library macro EDOM represents a domain error, which occurs if an input argument is outside the domain, over which the mathematical function is defined and errno is set to EDOM

int main()
{
    double val;
    errno = 0;

    val = sqrt(-10);

    if (errno == EDOM)
        printf("Invalid value\n");
    else
        puts("Valid value");

    errno = 0;
    val = sqrt(10);

    if (errno == EDOM)
        printf("Invalid value\n");
    else
        puts("Valid value");

    return 0;
}