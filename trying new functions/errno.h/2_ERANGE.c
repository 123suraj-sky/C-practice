#include <stdio.h>
#include <errno.h>
#include <math.h>

// C library macro ERANGE represents a range error, which occurs if an input argument is outside the range, over which the mathematical function is defined and errno is set to ERANGE

int main()
{
    double x = 2, value = log(x);
    if (errno == ERANGE)
        printf("log(%f) is out of range\n", x);
    else
        printf("log(%f) = %f\n", x, value);

    x = 1, value = log(x);
    if (errno == ERANGE)
        printf("log(%f) is out of range\n", x);
    else
        printf("log(%f) = %f\n", x, value);

    x = 0, value = log(x);
    if (errno == ERANGE)
        printf("log(%f) is out of range\n", x);
    else
        printf("log(%f) = %f\n", x, value);

    return 0;
}