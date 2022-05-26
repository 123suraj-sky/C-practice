#include <stdio.h>

int main()
{
    printf("*** Programme to check whether a number is even or odd ***\n\n");
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    switch (a % 2 == 0)
    {
        // If a % 2 == 0
    case 0:
        printf("%d is odd\n", a);
        break;

        // else if a % 2 != 0
        // else if a % 2 == 1
    case 1:
        printf("%d is even\n", a);
        break;
    }
    return 0;
}