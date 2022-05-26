#include <stdio.h>

int main(){
    printf("*** Programme for finding an alphabet is upper case or lower case ***\n\n");
    char c;
    printf("Enter a character\n");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z'){
        printf("Entered alphabet %c is of lower case\n", c);
    }
    else if (c >= 'A' && c <= 'Z'){
        printf("Entered alphabet %c is of upper case\n", c);
    }
    else {
        printf("Error!! Please enter an alphabet\n");
    }
    return 0;
}