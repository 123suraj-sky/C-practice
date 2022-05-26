#include <stdio.h>

int main(){
    printf("*** Programme for finding maximum of three numbers ***\n\n");
    int a, b, c;
    printf("Enter the values of a, b and c\n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a>b) && (a>c)){
        printf("Maximum between %d, %d and %d is %d\n", a, b, c, a);
    }
    else if ((b>c) && (b>a)){
        printf("Maximum between %d, %d and %d is %d\n", a, b, c, b);
    }
    else{
        printf("Maximum between %d, %d and %d is %d\n", a, b, c, c);
    }
    return 0;
}