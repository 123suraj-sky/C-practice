#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the value of num1, num2, num3\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if ((num1 > num2) && (num1 > num3))
    {
        printf("Max of %d, %d, %d is %d\n", num1, num2, num3, num1);
    }
    if ((num2 > num1) && (num2 > num3))
    {
        printf("Max of %d, %d, %d is %d\n", num1, num2, num3, num2);
    }
    if ((num3 > num2) && (num3 > num1))
    {
        printf("Max of %d, %d, %d is %d\n", num1, num2, num3, num3);
    }
    return 0;
}