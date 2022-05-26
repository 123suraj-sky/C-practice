#include <stdio.h>
#include "16_source_file.c"

int main()
{
    int num;

    printf("Enter a numer: ");
    scanf("%d", &num);

    printf("%d is ", num);
    convertToBinary(num);
    return 0;
}