#include <stdio.h>

/* Function declarations for calculator */
float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

int main()
{
    printf("*** Programme to create a Simple Calculator ***\n\n");

    char op;
    float num1, num2, result = 0.0f;

    printf("Enter [number 1] [+ - * /] [number 2]\n");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        result = add(num1, num2);
        break;

    case '-':
        result = sub(num1, num2);
        break;

    case '*':
        result = mult(num1, num2);
        break;

    case '/':
        result = div(num1, num2);
        break;

    default:
        printf("Invalid operator!! Please enter operator from '+', '-', '*', '/'");
    }

    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);
    return 0;
}

// Function to add two numbers
float add(float num1, float num2)
{
    return num1 + num2;
}

// Function to subtract two numbers
float sub(float num1, float num2)
{
    return num1 - num2;
}

// Function  to multiply two numbers
float mult(float num1, float num2)
{
    return num1 * num2;
}

// Function to divide two numbers
float div(float num1, float num2)
{
    return num1 / num2;
}