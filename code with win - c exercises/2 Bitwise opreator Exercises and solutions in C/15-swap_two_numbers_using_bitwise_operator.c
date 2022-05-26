#include <stdio.h>

void swap(int *num1, int *num2)
{
    *num1 ^= *num2; // num1 = num1 ^ num2
    *num2 ^= *num1;
    *num1 ^= *num2;
}

int main()
{
    int num1, num2;

    printf("Enter a first number: ");
    scanf("%d", &num1);
    printf("Enter a second number: ");
    scanf("%d", &num2);

    /*
    Suppose two integer values a and b
    *XOR Operator
    Perform, x = a ^ b
    
    !Result
    x ^ b will evaluate to a
    x ^ a will evaluate to b
    */

    swap(&num1, &num2);

    printf("\nAfter swap\nFirst number is %d\n", num1);
    printf("And\nSecond number is %d\n", num2);
    return 0;
}