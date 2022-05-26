#include <stdio.h>

int main()
{
    printf("*** Programme to find first and last digit of a number *** \n\n");
    int n;
    printf("Enter any number:-\n");
    scanf("%d", &n);

    int ld; // ld for last digit
    ld = n % 10;
    printf("Last digit of %d is %d\n", n, ld);

    int fd; // fd for first digit
    fd = n;

    while(fd >= 10){
        fd = fd / 10;
    }
    printf("First digit of %d is %d\n", n, fd);
    return 0;
}