#include <stdio.h>

int main()
{
    printf("*** Programme to print all odd numbers between 1 to 100 ***\n\n");
    int n1 = 1, n2 = 100;

    printf("All odd numbers between 1 and 100 are:\n");
    while (n2 > n1)
    {
        printf("%d\n", n1);
        n1++;
        n1++;
    }
    return 0;
}