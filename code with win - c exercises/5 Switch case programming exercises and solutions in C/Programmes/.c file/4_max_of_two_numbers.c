#include <stdio.h>

int main()
{
    printf("*** Programme to find maximum between two numbers ***\n\n");
    int a, b;
    printf("Enter two numbers:-\n");
    scanf("%d%d", &a, &b);

    switch (a > b)
    {
        // If condition is false
        case 0: // Case 0 is considered as false
            printf("%d is maximum\n", b);
            break;

        // If condition is true
        case 1: // Case 1 is considered as true
            printf("%d is maximum\n", a);
            break;
    }
    return 0;
}