#include <stdio.h>

void method1(int n);
void method2(int n);
void method3(int n);
void method4(int n);
void method5(int n);
void method6();

int main()
{
    system("cls");
    int n, user_input; // n for number upto which the series is going to print and user_input to take input from user
ask_again:
    printf("\nWhat pattern do you want to print?\n\n\
(1) Square Pattern\n\
(2) lower half triagnle method 1\n\
(3) Upper half triangle method 1\n\
(4) Upper half triangle method 2\n\
(5) Lower half triangle method 2\n\
(6) Rectangle Pattern\n\n");
    scanf("%d", &user_input);

    if ((user_input == 6) || (user_input < 1 || user_input > 6))
        goto skip;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n");
skip:
    switch (user_input)
    {
    case 1:
        method1(n);
        break;
    case 2:
        method2(n);
        break;
    case 3:
        method3(n);
        break;
    case 4:
        method4(n);
        break;
    case 5:
        method5(n);
        break;
    case 6:
        method6();
        break;

    default:
        printf("Error!! Please enter value from 1 - 6\n");
        goto ask_again;
        break;
    }

    system("pause");
    return 0;
}

void method1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void method2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void method3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void method4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
            printf("*");
        printf("\n");
        for (int z = 0; z <= i; z++)
            printf(" ");
    }
    printf("\n");
}

void method5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int z = n - 1; z > i; z--)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

void method6()
{
    int row, column;
    printf("Enter column: ");
    scanf("%d", &column);
    printf("Enter row: ");
    scanf("%d", &row);
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}
