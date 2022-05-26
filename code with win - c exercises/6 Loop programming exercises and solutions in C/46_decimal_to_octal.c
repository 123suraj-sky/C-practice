#include <stdio.h>

int main(){
    printf("*** Program to convert decimal to octal number system ***\n\n");

    long long decimal, tempDecimal, octal = 0;
    int i, rem, place = 1;

    printf("Enter any decimal number:- ");
    scanf("%lld", &decimal);

    // Copy it to temp variable for further calculation
    tempDecimal = decimal;

    // Decimal to octal conversion
    while(tempDecimal > 0){
        rem = tempDecimal % 8;

        octal = (rem * place) + octal;

        tempDecimal /= 8;

        place *= 10;
    }

    printf("Decimal number is %lld\n", decimal);
    printf("Octal number is %lld\n", octal);
    return 0;
}