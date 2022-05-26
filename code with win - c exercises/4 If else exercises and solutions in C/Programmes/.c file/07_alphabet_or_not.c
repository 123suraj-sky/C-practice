#include <stdio.h>

int main(){
    printf("*** Programme for finding a character is alphabet or not ***\n\n");
    char c;
    printf("Enter the character\n");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("The entered character %c is an alphabet\n", c);
    }
    else {
        printf("The entered character %c is not an alphabet\n", c);
    }
    return 0;
}