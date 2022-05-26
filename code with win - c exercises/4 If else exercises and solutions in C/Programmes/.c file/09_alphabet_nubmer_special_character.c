#include <stdio.h>

int main(){
    printf("*** Programme for finding a character is alphabet, number or special character ***\n\n");
    char c;
    printf("Enter a character\n");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("Entered character %c is an alphabet\n", c);
    }
    else if (c >= '0' && c <= '9'){
        printf("Entered character %c is a number\n", c);
    }
    else {
        printf("Entered character %c is a special character", c);
    }
    return 0;
}