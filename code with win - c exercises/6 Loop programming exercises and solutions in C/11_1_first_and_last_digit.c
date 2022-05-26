#include <stdio.h>
#include <math.h>

int main()
{
    printf("*** Programme to find first and last digit of a number *** \n\n");
    int n, fd, ld, digits; // fd is for first digit and ld is for last digit

    printf("Enter any number:-\n");
    scanf("%d", &n);

    // finding last digit
    ld = n % 10;

    // finding total number of digits
    digits = (int)log10(n); /* log10() is a mathematical fuction present in math.h header file.
                                It returns log base 10 value of the passed parameter to log10() function */

    // finding first digits
    fd = (int)(n / pow(10, digits));

    printf("First digit in %d is %d\n", n, fd);
    printf("Last digit in %d is %d\n", n, ld);
    return 0;
}