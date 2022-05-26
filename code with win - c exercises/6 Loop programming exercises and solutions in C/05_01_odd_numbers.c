#include <stdio.h>

int main()
{
    printf("*** Programme to print all odd numbers in a range ***\n\n");

    int n1, n2;
    printf("Enter Lower limit:-\n");
    scanf("%d", &n1);
    printf("Enter Upper limit:-\n");
    scanf("%d", &n2);

    printf("All odd numbers between %d and %d are:\n", n1, n2);
    if(n1 % 2 == 0){
        n1++;
    }
    while (n2 >= n1)
    {
        printf("%d\n", n1);
        n1++;
        n1++;
        
    }
    return 0;
}