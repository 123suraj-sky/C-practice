#include <stdio.h>
#include <math.h>

int main(){
    printf("*** Programme to swap first and last digit of a number ***\n\n");
    int num, swappedNum;
    int firstDigit, lastDigit, digits; // digits for total number of digits

    printf("Enter any number:-\n");
    scanf("%d", &num);

    lastDigit = num % 10;

    digits = (int)log(num);

    firstDigit= (int)(num / pow(10, digits));

    swappedNum = lastDigit;
    swappedNum *= (int) round(pow(10, digits));
    swappedNum += num % ((int) round(pow(10, digits)));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Original number is %d\n", num);
    printf("Number after swapping first and last digit is %d\n", swappedNum);
    return 0;
}