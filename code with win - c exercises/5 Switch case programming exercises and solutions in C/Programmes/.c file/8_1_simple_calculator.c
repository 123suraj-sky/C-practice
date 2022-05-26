#include <stdio.h>

int main()
{
    printf("*** Programme to create Simple Calculator ***\n\n");

    char op;
    float num1, num2, result = 0.0f;

    printf("Enter [number 1], [+ - * /] and [number 2]\n");
    scanf("%f %c %f", &num1, &op, &num2);
    // scanf("%f%c%f", &num1, &op, &num2);
    // Code will not run for above code because it will not read characters

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    default:
        printf("Invalid operator!! Please enter a valid operator from '+', '-', '*', '/'\n");
    }

    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}