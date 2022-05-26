#include <stdio.h>
#include <conio.h>

int main(){
    printf("*** Programme to make a Simple Calculator ***\n\n");
    // clrscr(); // used to clear previous screen
    float num1, num2;
    char op;
    float result;

    printf("Enter the first number\n");
    scanf("%f", &num1);

    printf("Enter the operation\n");
    scanf(" %c", &op); // Must leave a space before %c so that programme will run
                        // If we write %c in the first step so there is no need to press space


    printf("Enter the second number\n");
    scanf("%f", &num2);

    switch(op){
        case '-':
        result = num1 - num2;
        printf("%f", result);
        break;

        case '+':
        result = num1 + num2;
        printf("%f", result);
        break;

        case '*':
        result = num1 * num2;
        printf("%f", result);
        break;

        case '/':
        result = num1 / num2;
        printf("%f", result);
        break;

        default:
        printf("The opreator is not valid\n");
    }
    // getch(); // it is used to hold screen
    return 0;
}