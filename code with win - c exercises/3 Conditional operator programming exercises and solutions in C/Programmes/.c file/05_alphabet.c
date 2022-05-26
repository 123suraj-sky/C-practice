#include <stdio.h>

int main(){
    printf("*** Programme to check a character is alphaber or not ***\n\n");

    char c;
    printf("Enter the character here\n");
    scanf("%c", &c);

    ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? printf("It is an alphabet\n") : printf("This is not an alphabet\n"));
    return 0;
}