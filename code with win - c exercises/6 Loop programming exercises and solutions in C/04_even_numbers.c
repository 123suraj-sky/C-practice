#include <stdio.h>

int main()
{
    printf("*** Programme to print all even numbers between 1 to 100 ***\n    Using while loop\n\n");

    int a = 0, n = 100;
    // printf("Enter the value of n\n");
    // scanf("%d", &n);
    // NO need to do upper steps

    printf("All even numbers between 1 and 100 are:\n");
    while (a < 100 && a >= 0)
    {
        a++;
        a++;
        printf("%d\n", a);
    }
    return 0;
}