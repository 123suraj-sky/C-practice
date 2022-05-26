#include <stdio.h>

int main()
{
    printf("*** Programme to find a number is even or odd ***\n\n");
    
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Entered number %d is even\n", a);
    }
    else
    {
        printf("Entered number %d is odd\n", a);
    }
    return 0;
}