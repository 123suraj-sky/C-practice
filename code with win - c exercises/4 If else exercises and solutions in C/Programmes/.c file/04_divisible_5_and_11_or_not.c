#include <stdio.h>

int main(){
    printf("*** Programme for checking a number is divisible by 5 and 11 or not ***\n\n");
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    if ((a%5 == 0) && (a%11 == 0)){
        printf("%d is divisible by 5 and 11\n", a);
    }
    else {
        printf("%d is not divisible by 5 and 11\n", a);
    }
    return 0;
}