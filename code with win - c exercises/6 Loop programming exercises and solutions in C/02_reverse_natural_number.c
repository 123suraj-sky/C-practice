#include <stdio.h>

int main()
{
    printf("*** Programme to print all natural numbers in reverse\n     Using while loop\n\n");
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    printf("All natural numbers between 1 and %d in reverse order are:\n", n);
    while (n >= 1)
    {
        printf("%d\n", n);
        n--;
    }
    return 0;
}