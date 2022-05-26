#include <stdio.h>
#include <math.h>

void sum(int a, int b);
void subtract(int a, int b);
void mult(int a, int b);
void div(int a, int b);

int main()
{
    int first, second; // first for first value and second for second value
    char operator;     // operator for operator to be used like +, -, ...

    printf("Select the operator from following: \n\
    \n1) + or 1 for addition\
    \n2) - or 2 for subtraction\
    \n3) * or 3 for multiplication\
    \n4) / or 4 for division\n");
    scanf("%c", &operator);

    printf("Enter first number: \n");
    scanf("%d", &first);

    printf("Enter second number: \n");
    scanf("%d", &second);

    // pow(first, second); // for first to the power second
    // subtract(first, second);
    // subtract(first, second);
    // subtract(first, second);
    // subtract(first, second);
    // subtract(first, second);
    // subtract(first, second);
    // subtract(first, second);
    // subtract(first, second);
    // subtract(first, second);
    // subtract(first, second);

    switch (operator)
    {
    case '+':
    case '1':
        sum(first, second);
        break;
    case '-':
    case '2':
        subtract(first, second);
        break;
    case '*':
    case '3':
        mult(first, second);
        break;
    case '/':
    case '4':
        div(first, second);
        break;
    }
    return 0;
}

// a is act as first number
// b is act as second number
// sum for addition of two numbers
void sum(int a, int b)
{
    int c = a + b;
    (a > 0 && b > 0) ? printf("\n\n%d + %d = %d\n", a, b, c) : printf("\n\n(%d) + (%d) = (%d)\n", a, b, c);
}

// subract for difference of two numbers
void subtract(int a, int b)
{
    int c = a - b;
    (a > 0 && b > 0) ? printf("\n\n%d - %d = %d\n", a, b, c) : printf("\n\n(%d) - (%d) = (%d)\n", a, b, c);
}

// mult for multiplication of two numbers
void mult(int a, int b)
{
    int c = a * b;
    (a > 0 && b > 0) ? printf("\n\n%d x %d = %d\n", a, b, c) : printf("\n\n(%d) x (%d) = (%d)\n", a, b, c);
}

// div for division of two numbers
void div(int a, int b)
{
    int c = a / b;
    (a > 0 && b > 0) ? printf("\n\n%d / %d = %d\n", a, b, c) : printf("\n\n(%d) / (%d) = (%d)\n", a, b, c);
}