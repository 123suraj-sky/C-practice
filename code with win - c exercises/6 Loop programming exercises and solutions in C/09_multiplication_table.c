#include <stdio.h>

int main()
{
    printf("*** Programme to print multiplication table of any number ***\n\n");
    int i = 1, n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    printf("The multiplication table of %d is:\n", n);
    for (i; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}