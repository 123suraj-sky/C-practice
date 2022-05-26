#include <stdio.h>

int main(){
    printf("*** Programme to input all sides of a triangle and check whether triangle is valid or not ***\n\n");
    int a, b, c;
    printf("Enter all three sides:-\n");
    scanf("%d%d%d", &a, &b, &c);

    if (((a < b + c) && (b < a + c) && (c < a + b)) && (a > 0) && (b > 0) && (c > 0)){
        printf("This is a valid traingle\n"); // sum to two sides is greater than third side
    }
    else {
        printf("This is not a valid traingle\n");
    }

    return 0;
}