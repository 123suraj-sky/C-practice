#include <stdio.h>

int main()
{
    printf("*** Programme for finding greatest of three numbers ***\n\n");
    
    int num1, num2, num3, max;
    printf("Enter the value of num1, num2, num3\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;
    printf("Max of %d, %d and %d is %d\n", num1, num2, num3, max);

    return 0;
}