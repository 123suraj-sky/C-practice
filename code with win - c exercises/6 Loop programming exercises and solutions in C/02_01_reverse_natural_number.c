#include <stdio.h>

int main()
{
    printf("*** Programme to print all natural numbers in reverse\nIn a range of two numbers\n     Using while loop\n\n");
    int n1, n2;
    printf("Enter the lower and upper bound of numbers\n");
    scanf("%d %d", &n1, &n2);

    printf("All natural numbers between %d and %d in reverse order are:\n", n1, n2);
    while (n2 > n1)
    {
        n2--;
        printf("%d\n", n2);
    }
    return 0;
}