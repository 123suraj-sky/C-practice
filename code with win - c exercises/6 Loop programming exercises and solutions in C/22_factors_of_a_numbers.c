#include <stdio.h>

int main()
{
    printf("*** Program to find all factors of a number ***\n\n");
    int n, i;
    printf("Enter any number:-\n");
    scanf("%d", &n);

    printf("Factors of %d are:\n", n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
        }
    }
    
    return 0;
}