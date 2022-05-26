#include <stdio.h>

int main()
{
    printf("*** Programme for finding a number is positive, negative or zero ***\n\n");
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("%d is a positive number\n", a);
    }
    else if (a == 0)
    {
        printf("%d is neither positive nor negative. It is zero!!\n", a);
    }
    else if (a < 0)
    {
        printf("%d is negative number\n", a);
    }
    else
    {
        printf("This is not a number\n");
    }
    return 0;
}