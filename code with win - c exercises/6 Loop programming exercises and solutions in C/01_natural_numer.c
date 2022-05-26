#include <stdio.h>

int main()
{
    printf("*** Programme to print all natural numbers from 1 to n ***\n    -->Using while loop\n\n");
    int a = 0;
    int n; // n is a natural number
    printf("Enter the value of n\n");
    scanf("%d", &n);

    printf("All natural number between 1 and %d are:\n", n);
    while (a < n)
    {
    a++; 
    printf("%d\n", a);

    }
        
    return 0;
}